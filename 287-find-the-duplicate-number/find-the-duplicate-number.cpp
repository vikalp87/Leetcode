class Solution {
public:
    int findDuplicate(vector<int>& nums) {

      //  TC-: o(2n) and its also modifiying an array
    //     int i=0;

    //     while(i<nums.size())
    //     {
    //          if((nums[i]-1)!=i)
    //          {
    //             if(nums[i]!=nums[nums[i]-1])
    //            swap(nums[i],nums[nums[i]-1]);
    //            else i++;
    //          }
    //          else
    //          {
    //             i++;
    //          }
    //  }

    //     for(int i=0;i<nums.size();i++)
    //     {
    //         if((nums[i]-1)!=i)
    //         {
    //             return nums[i];
    //         }
    //     }


    // return 0;


          int slow=nums[0];
          int fast=nums[0];

          do{
           slow=nums[slow];
           fast=nums[nums[fast]];
          }while(slow!=fast);
           slow=nums[0];
           while(slow!=fast)
           {
            slow=nums[slow];
            fast=nums[fast];
           }  
          return slow;
    }
};