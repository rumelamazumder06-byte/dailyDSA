class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_set<char> ans;
      int left=0,maxlen=0;
      for(int right=0;right<s.size();right++){
        while(ans.find(s[right])!=ans.end())
        {
            ans.erase(s[left]);
            left++;
        }
        ans.insert(s[right]);
        maxlen=max(maxlen,right-left+1);

      }
      return maxlen;
    }
};