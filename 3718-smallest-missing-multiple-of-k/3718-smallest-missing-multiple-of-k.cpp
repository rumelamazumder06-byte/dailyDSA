class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>ps(nums.begin(),nums.end());
        int current =k;
        while(true){
            if(ps.find(current)==ps.end())
            return current;

            current+=k;
        }
    }
};