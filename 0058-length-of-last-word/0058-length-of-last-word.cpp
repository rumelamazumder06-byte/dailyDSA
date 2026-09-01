class Solution {
public:
    int lengthOfLastWord(string s) {
       
        int count=0;
      
       size_t end=s.find_last_not_of(" \t\n\r");
       size_t start=s.find_first_not_of(" \t\n\r");
       s.erase(end+1);
       s.erase(0,start);
 int m=s.size();
        for(int i=m-1;i>=0;i--){
        
          if(s[i]==' ')
          break;
          else
          count++;
        }
        return count;
    }
};