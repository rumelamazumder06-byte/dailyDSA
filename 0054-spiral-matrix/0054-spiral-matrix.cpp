class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    if(matrix.empty()|| matrix[0].empty()) return {};


        int m=matrix[0].size();
        int n=matrix.size();
        // int count =1;
        int srow=0,scol=0,erow=n-1,ecol=m-1;
        vector<int>ans;
        while(srow<=erow&& scol<=ecol){
            for(int i =scol;i<=ecol;i++){
            ans.push_back(matrix[srow][i]);}
            for(int i=srow+1;i<=erow;i++){

            ans.push_back(matrix[i][ecol]);}
             if(srow==erow) break;
                 else
            for(int i=ecol-1;i>=scol;i--){
                //  if(srow=erow) break;
                //  else
            ans.push_back(matrix[erow][i]);}
              if(ecol==scol)
                break;
            for(int i=erow-1;i>=srow+1;i--)
            {
                //  if(ecol==scol)
                //  break;
            ans.push_back(matrix[i][scol]);
            }
            // count++;
            srow++;
            erow--;
            ecol--;
            scol++;
        }
        return ans;
    }
};