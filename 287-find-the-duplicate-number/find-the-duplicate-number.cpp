class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;

        while(i<nums.size())
        {
             if((nums[i]-1)!=i)
             {
                if(nums[i]!=nums[nums[i]-1])
               swap(nums[i],nums[nums[i]-1]);
               else i++;
             }
             else
             {
                i++;
             }


        }

        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]-1)!=i)
            {
                return nums[i];
            }
        }

    return 0;


    }
};