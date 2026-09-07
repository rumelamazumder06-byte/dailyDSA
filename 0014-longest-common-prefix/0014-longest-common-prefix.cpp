class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            string ans=strs[0];
        return ans;}
        string ans="";
        string same=strs[0];
        for(int i=1;i<strs.size();i++)
        {    ans="";
           for(int j=0;j<strs[i].size();j++){
            
               if(same[j]==strs[i][j]){
               ans+=same[j];

              }
               else{
               
               break;
               }
           }
            same=ans;
        }
        return ans;
    }
};