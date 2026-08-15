class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n= heights.size();
        vector<int>ans =heights;
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(heights[j]>heights[j+1]){
                    swap(heights[j],heights[j+1]);
                    
                }
            }
        }
        for(int i=0;i<n;i++){
            if(heights[i]!=ans[i])
            count++;
        }
        return count;
    }
};