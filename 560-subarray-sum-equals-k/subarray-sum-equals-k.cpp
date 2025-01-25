class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //it is only for +ve numbers
        // int i=0,j=0;
        // int count=0;
        // int sum=0;
        // while(j<nums.size())
        // {
        //     sum+=nums[j];
        //     if(sum<k)
        //     j++;
        //     else if(sum==k)
        //     {
        //     count++;
        //     j++;
        //     }
        //     else
        //     {
        //         while(sum>k)
        //         {
        //             sum-=nums[i];
        //             i++;
                   
        //         }
        //         if(sum==k)
        //         {
        //         count++;
        //         }
        //         j++;
                
        //     }
        // }
        // return count;
    int n=nums.size();
    int count=0;
    unordered_map<int,int>m;
    m[0]=1;
    int prefixsum=0;
     for(int i=0;i<n;i++)
     {
        prefixsum+=nums[i];
       int searchNo=prefixsum-k;
        if(m.find(searchNo)!=m.end())
        {
            count=count+m[searchNo];
        }
        m[prefixsum]++;
     }

   return count;
    }
};