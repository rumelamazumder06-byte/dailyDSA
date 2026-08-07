class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st =0,end=nums.size()-1;
        return binary(nums,target ,st,end);
    }
      int binary(vector<int>&nums,int target,int st,int end){
        if(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) return  binary(nums,target ,st,mid-1);
            if(nums[mid]<target) return  binary(nums,target ,mid+1,end);
        } return -1;
      }
};