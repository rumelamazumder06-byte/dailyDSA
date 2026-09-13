class Solution {
public:
    int divide(int dividend, int divisor) {
      long  int s=divisor,a=dividend;



      if(divisor==-1&&dividend ==INT_MIN)
      return INT_MAX;
       bool isnegative=(dividend<0)^(divisor<0);
       long long absdividend=abs((long long)dividend);
       long long absdivisor=abs((long long)divisor);

       long long quotient=0;
       while(absdividend>=absdivisor){
         long long tempdivisor=absdivisor;
         long long multiple=1;
         while(absdividend>=(tempdivisor<<1)){
        tempdivisor<<=1;
        multiple<<=1;
         }
         absdividend-=tempdivisor;
         quotient+=multiple;
       }
       return isnegative? -quotient:quotient;
    }
    
    
};