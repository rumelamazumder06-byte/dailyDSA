class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        
        string lex="";
        
        for(int i=0;i<n;i++){
           string ans="";
           int count=0;
            for(int j=i;j<n;j++){
              if(s[j]=='1'){
                count++;
              }
              ans.push_back(s[j]);
              if(count==k)
              {if(lex==""||(ans.size()==lex.size() && ans<lex) || ans.size()<lex.size())
              lex=ans;
              break;
              }
            }   
        }
        return lex;
        
    }
};