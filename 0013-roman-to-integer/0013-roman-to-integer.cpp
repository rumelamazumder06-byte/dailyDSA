class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>rom={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int tot=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(i<n-1&&rom[s[i]]<rom[s[i+1]])
            tot-=rom[s[i]];
            else
            tot+=rom[s[i]];

        }
        return tot;
    }
};