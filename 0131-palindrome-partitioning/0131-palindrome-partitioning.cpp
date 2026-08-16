class Solution {
public:
bool ispalindrome(string part){
    string m= part;
    reverse(part.begin(),part.end());
    if(part==m) return true;
    
    return false;
}
void getans(string s,vector<vector<string>>&ans,vector<string> &partition){
    if(s.size()==0){
        ans.push_back(partition);
        return;
    }
    for(int i=0;i<s.size();i++){
        string part=s.substr(0,i+1);
        if(ispalindrome(part)){
            partition.push_back(part);
         getans(s.substr(i+1),ans,partition);
         partition.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;
        getans(s,ans,partition);
        return ans;
    }
};