class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0;
        int product=1;
        int count=0;
        while(j<nums.size())
        {
            product*=nums[j];
            if(product<k)
            {
               count+=(j-i+1);
               j++;
            }
            else
            {
                while(product>=k&&i<nums.size()&&i<j)
                {
                   product=product/nums[i];
                    i++;
                } 
                if(product<k)
                {
                   count+=(j-i+1);
                }
                j++;
            }
        }
        return count;
    }
};