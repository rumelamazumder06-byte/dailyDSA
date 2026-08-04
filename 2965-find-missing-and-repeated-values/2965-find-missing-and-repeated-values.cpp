class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        unordered_set<int>s;
        int actualsum=0;
        int a;
        int n=grid.size();
        int expectedsum =(n*n)*((n*n)+1)/2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 actualsum+=grid[i][j]; 
                if(s.find(grid[i][j])!=s.end()){
             a=  grid[i][j];
                ans.push_back(a);}
                else
                s.insert(grid[i][j]);
            }
        }
       ans.push_back(expectedsum+a-actualsum);
       
        return ans;
    }
};