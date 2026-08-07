class Solution {
public:
void subsets(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>> &subs){
    if(i==nums.size()){
        subs.push_back(ans);
        return;
    }
   
     
    ans.push_back(nums[i]);
    subsets(nums,ans,i+1,subs);
    ans.pop_back();
    int indx =i+1;
    while(indx<nums.size()&&nums[indx]==nums[indx-1]){
    indx++;}
    subsets(nums,ans,indx,subs);
     

    

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> subs;
        vector<int>ans;
       
        subsets(nums,ans,0,subs);
        return subs;
    }
};