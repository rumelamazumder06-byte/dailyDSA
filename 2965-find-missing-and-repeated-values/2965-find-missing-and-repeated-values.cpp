class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        unordered_set<int>s;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s.find(grid[i][j])!=s.end())
                ans.push_back(grid[i][j]);
                else
                s.insert(grid[i][j]);
            }
        }
        for(int i=1;i<=(n*n);i++){
               if(s.find(i) != s.end())
               continue;
               else
               ans.push_back(i);
        }
        return ans;
    }
};