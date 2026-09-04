class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
      int n=nums.size();
      int stable=0;
      
      for(int i=0;i<n;i++){
       int maximum=*max_element(nums.begin(),nums.begin()+i+1);
       int minimum=*min_element(nums.begin()+i,nums.end());
      stable=maximum-minimum;
      if(stable<=k)
      return i;
      else 
      continue;
       }  
      return -1;
    }
};