class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>m;
        
        int first=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            first=nums[i];
            int second=target -first;
            if(m.find(second)!=m.end()){
              ans.push_back(m[second]);
              ans.push_back(i);
              return ans;
            }
            else
           m[first]=i;
        }
        return ans;
    }
};