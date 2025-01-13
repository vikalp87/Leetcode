class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0,right=0;
        int zerocount=0;
        int maxlength=0;
        while(right<nums.size())
        {
            if(nums[right]==0){
               zerocount++;
           }

             while(zerocount>1)
             {
                if(nums[left]==0)
                  zerocount--;
                   left++;
             }
            
             maxlength=max(maxlength,right-left);
             right++;

        }
        return maxlength;
    }
};