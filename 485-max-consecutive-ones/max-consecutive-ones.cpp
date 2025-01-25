class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
      int i=0,j=0;
      int zeroCount=0;
      int maxi=0;
      while(j<nums.size())

      {
        if(nums[j]==0)
        zeroCount++;
           
           while(zeroCount>0)
           {
            if(nums[i]==0)
            zeroCount--;
              i++;
           }
           maxi=max(maxi,j-i+1);
           j++;
      }
           return maxi;
    }
};