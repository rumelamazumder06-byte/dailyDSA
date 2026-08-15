class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int multi1 =1,multi2;
     int n=nums.size();
    
        
    
      multi1=nums[0]*nums[1]*nums[n-1];
     
     
     multi2=nums[n-1]*nums[n-2]*nums[n-3];
     return max(multi1,multi2);   
    }
};