class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        vector<int>ans={0,0};
        int maxi=0;
        for(int i=0;i<m;i++){
            int onesCount=0;
            for(int j=0;j<n;j++){
                
              if(nums[i][j]==1){
                onesCount++;
              }
  

            }
           if(onesCount>maxi){
                ans[0]=i;
                ans[1]=onesCount;
                maxi=max(maxi,onesCount);
             }


        }
        return ans;
    }
};