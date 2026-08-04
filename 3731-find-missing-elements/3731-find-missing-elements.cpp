class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int start =nums[0];
        int n=nums.size();
        int end =nums[n-1];
        for(int i=start;i<end;i++){
            if(find(nums.begin(),nums.end(),i)!=nums.end())
            continue;
            else{
                ans.push_back(i);
            }
        }
        return ans;
    }

};