class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 1;
        if(n==2)
        return 2;

        int maxa=nums[0];
        int cmax=0;
        int mina=nums[0];
        int cmin=0;
        for(int i=1;i<n;i++){
          if(nums[i]>maxa)
          {
            maxa=nums[i];
            cmax=i;
          }
          if(nums[i]<mina){
            mina=nums[i];
            cmin=i;
          }

        }

       int l=min(cmin,cmax);
       int r=max(cmin,cmax);

       int o1=r+1;
       int o2=n-l;
    int o3=(l+1)+(n-r);
    return min({o1,o2,o3});
    }
};