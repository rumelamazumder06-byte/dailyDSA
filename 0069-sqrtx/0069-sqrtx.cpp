class Solution {
public:
    int mySqrt(int x) {
        int multi=1;
        if(x==1) return 1;
        if(x<=10){
           for(int i=1;i<=x;i++){
            if(i*i==x)
            return i;
            if(i*i>x)
            return i-1;
        } 
        }
        for(int long i=1;i<=x/2;i++){
            if(i*i==x)
            return i;
            if(i*i>x)
            return i-1;
        }
        return 0;
    }
};