class Solution {
public:
    bool checkDivisibility(int n) {
        int dup=n;
        int sum=0,multi=1;
        while(n!=0){
          multi*=n%10;
          sum+=n%10;
          n/=10;
        }
        sum+=multi;
        if(dup%sum==0)
        return true;

        return false;
    }
};