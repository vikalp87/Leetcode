class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //    sort(nums.begin(),nums.end());
    //    int i,count=0;
    //    int n=nums.size();
    //    for(i=0;i<nums.size();i++)
    //    {
    //         if(i+1<nums.size()&&nums[i]==nums[i+1])
    //         count++;
    //         else
    //         {
    //             if((count+1)>(n/2))
    //            {
    //                return nums[i];
    //            }

    //             count=0;
    //         }
    //    }
    //          if((count+1)>(n/2))
    //            {
    //                return nums[i];
    //            }

       

    // return 0;

       unordered_map<int,int>m;
       for(int i=0;i<nums.size();i++)
       {
        m[nums[i]]++;
       }
       for(auto i:m)
       {
          if(i.second>(nums.size()/2))
          {
            return i.first;
          }
       }

   return 0;
   
    }
};