class Solution {
public:
    int smallestNumber(int n, int t) {
       int dup =n;
       int product=1;
       while(dup!=0)
       {
        product *=dup%10;
        dup/=10;
       }
       if(product%t==0) {
        
       return n;}
      
       else
       {
        while(product%t>0){
             product =1;
            n=n+1;
            dup =n;
            while(dup!=0){
                product*=dup%10;
                dup/=10;
            }
        }
        return n;
       }
       return -1;
    }
};