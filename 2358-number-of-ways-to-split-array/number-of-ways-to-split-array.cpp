class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long totalsum=0;
        long prefixsum=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
       {
            totalsum=totalsum+nums[i];
        }

        for(int i=0;i<n;i++)
        {
            prefixsum+=nums[i];
            long remainingsum=totalsum-prefixsum;
             if(prefixsum>=remainingsum&&i<n-1)
             {
                count++;

             }
        }
        return count;
    }
};