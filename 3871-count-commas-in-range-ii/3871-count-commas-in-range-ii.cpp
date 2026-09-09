class Solution {
public:
    long long countCommas(long long n) {
       string s= to_string(n);
        if(s.size()<=3)
        return 0;
         int len=s.size();
       long  int comma=0;
       long int thres=1000;
       while(n>=thres){   
         comma+=n-thres+1;
         thres*=1000;
         }
         return comma; 
    }
};