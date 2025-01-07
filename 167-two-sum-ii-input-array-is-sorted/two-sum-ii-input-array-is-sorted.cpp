class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        int sum=0;

        while(i<j)
        {
           sum=nums[i]+nums[j];
           if(sum==target)
           {
              vector<int>ans={i+1,j+1};
                return ans;

           }
           else if(sum<target)
           {
               i++;
           }
           else
           {
               j--;
           }
        }
        return {0};
    }
};