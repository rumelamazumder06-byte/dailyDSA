class Solution {
public:
bool hap(int n){
   int sum=0;
    if(n==1)
    return true;
    if(n==4)
    return false;
    
    else{
        while(n!=0){
            sum=sum+(n%10)*(n%10);
            n/=10;
        }
        return hap(sum);
    }
    }
    bool isHappy(int n) {
        
       
        return hap(n);
    }
};