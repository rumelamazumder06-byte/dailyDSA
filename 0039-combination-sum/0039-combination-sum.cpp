class Solution {
public:
set<vector<int>>s;
void getallcombo (vector<int>& candidates, int target, vector<int> &combination, vector<vector<int>>&ans,  int i){
 if(target==0){
    if(s.find(combination)==s.end()){
    ans.push_back(combination);
    s.insert(combination);
    }
    return;

  }
  if(i==candidates.size()||target<0 )
  {
    return;
  }
  combination.push_back(candidates[i]);
getallcombo(candidates,target-candidates[i],combination,ans,i+1);
getallcombo(candidates,target-candidates[i],combination,ans,i);
combination.pop_back();
getallcombo(candidates,target,combination,ans,i+1);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int>combination;
      vector<vector<int>>ans;
      int i=0;
  getallcombo ( candidates,  target, combination, ans,  i);
  return ans;
    }
    
};