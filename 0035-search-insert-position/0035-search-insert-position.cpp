class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st =0;
        int end=nums.size()-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid]==target)
            return mid;
            if(nums[mid]>target)
            end=mid-1;
            else
            st=mid+1;
        }
        if(target<nums[0])
        return 0;
        if(target>nums[nums.size()-1])
        return nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(target>nums[i]&&target<nums[i+1])
            return i+1;
        }
        return nums.size();
    }
};