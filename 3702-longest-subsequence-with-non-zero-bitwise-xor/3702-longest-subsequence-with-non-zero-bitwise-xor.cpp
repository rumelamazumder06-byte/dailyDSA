class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n= nums.size(); 
        bool ans = true;
        int s=0;
        for(int i=0;i<n;i++){
            s^=nums[i];
            if(nums[i]!=0)
            ans = false;
        }
        if(ans) return 0;
        if(s!=0) return n;
        return n-1;
    }
};