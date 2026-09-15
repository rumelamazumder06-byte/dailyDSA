class Solution {
public:
    bool isValid(string s) {
      
        if (s.length() % 2 != 0) return false;

        std::unordered_map<char, char> map = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        std::stack<char> st;

        for (char c : s) {
            if (map.count(c)) {
                if (st.empty() || st.top() != map[c]) {
                    return false;
                }
                st.pop();
            } else {
                st.push(c);
            }
        }

        return st.empty(); 
    }
};