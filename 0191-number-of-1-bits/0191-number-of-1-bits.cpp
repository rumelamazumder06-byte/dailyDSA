class Solution {
public:
    int hammingWeight(int n) {
        int dup=n;
        string s="";
        while(dup!=0){
            s.push_back((dup%2)+'0');
            dup/=2;
        }
        reverse(s.begin(),s.end());
        int count=0;
        for(int i:s){
            if(i=='1')
            count++;
        }
        return count;
    }
};