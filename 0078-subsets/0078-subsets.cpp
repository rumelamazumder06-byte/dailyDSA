class Solution {
public:
void  allsubsets(vector<int>& nums,vector<int>&ans, int i,  vector<vector<int>> &allsubs){
if(i==nums.size()){
    allsubs.push_back(ans);
    return ;}

    ans.push_back(nums[i]);
    allsubsets(nums,ans,i+1,allsubs);

    ans.pop_back();
 allsubsets(nums,ans,i+1,allsubs);

}

    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0;
        vector<vector<int>>allsubs;
        vector<int>ans;
        allsubsets(nums,ans,i,allsubs);
         return allsubs;
         
    }
};