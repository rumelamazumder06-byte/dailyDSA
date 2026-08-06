class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n= nums.size();
        // vector<int> ps(n,0);
        // int count =0;
        // unordered_map<int,int>m;
        // ps[0]=nums[0];

        // for(int i=1;i<n;i++){
        //     ps[i]=ps[i-1]+nums[i];
        // }
        // for(int j=0;j<n;j++){
        //     if(ps[j]==k) count++;
        //    int val = ps[j]-k;
        //     if(m.find(val)!=m.end())
        //     count+=m[val];
        //    if(m.find(val)==m.end()){
        //     m[ps[j]]=0;}
        //      m[ps[j]]++;
        // }
        // return count;


        int n= nums.size();
        unordered_map<int,int>m;
        int curr=0; int count=0;
        for(int i:nums){
             curr+=i;
             if(curr==k) count++;
             int val =curr-k;
             if(m.find(val)!=m.end())
             count+=m[val];
              
                  m[curr]++;
        }
        return count;
    }
};