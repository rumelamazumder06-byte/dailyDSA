class Solution {
public:
    bool isPalindrome(int x) {
        int dup =x;
        long rev=0;
        while(dup>0){
            int b=dup%10;
            rev=rev*10+b;
            dup/=10;

        }
        if(rev==x)
        return true;
        return false;
    }
};