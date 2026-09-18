class Solution {
public:
    string addBinary(string a, string b) {
        int j =a.size()-1;
        int i= b.size()-1;
        int c=0;
        string ans="";
        while(i>=0||j>=0||c>0){
            int s=c;
            if(j>=0){
                s+=a[j]-'0';
                j--;
            }
            if(i>=0){
                s+=b[i]-'0';
                i--;
            }
            ans.push_back((s%2)+'0');
            c=s/2;

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};