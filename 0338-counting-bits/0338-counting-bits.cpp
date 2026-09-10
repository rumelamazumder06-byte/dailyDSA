class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits={};
        for(int i=0;i<=n;i++){
            int count=0;
            int k=i;
            while(k!=0){
          
                if(k%2==1)
                count++;

                k/=2;
            }
            
            bits.push_back(count);
        }
        return bits;
    }
};