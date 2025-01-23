class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      // tc=n^3(logn+logm) where logn is while find and inserting in set(ans) and log m is no  
      // of unique element present in set.
      // sc=o(2*no of quaduplets)+o(n)(at worst case set store n-3 eleement)
        // vector<vector<int>>ans;
        // set<vector<int>>s;

        // for(int i=0;i<nums.size();i++)
        // {
           
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //           set<long long>m;
        //         for(int k=j+1;k<nums.size();k++)
        //         {
        //           long long fourthNo=target-nums[i];
        //           fourthNo-=nums[j];
        //           fourthNo-=nums[k];

        //            if(m.find(fourthNo)!=m.end())
        //            {
                  
        //                vector<int>result={nums[i],nums[j],nums[k],int(fourthNo)};
        //                sort(result.begin(),result.end());
        //                s.insert(result);
                       
        //            }
                   
        //            m.insert(nums[k]);


        //         }
        //     }
        // }

        //    for(auto i:s)
        //    {
        //      ans.push_back(i);
        //    }
        // return ans;

      vector<vector<int>>ans;
      sort(nums.begin(),nums.end());
      if(nums.size()<4)
      return ans;
      
      for(int i=0;i<nums.size();i++)
      {
        if(i>0&&nums[i]==nums[i-1])continue;
        for(int j=i+1;j<nums.size();j++)
        {
             if((j-i>1)&&nums[j]==nums[j-1])continue;

            int k=j+1,l=nums.size()-1;
            long  reqsum=target-nums[i];
           reqsum-= nums[j];
            while(k<l)
            {
                 if(reqsum>(nums[k]+nums[l]))
                 {
                      k++;
                 }
                 else if(reqsum<(nums[k]+nums[l]))
                 {
                      l--;
                 }
                 else
                 {
                    vector<int>result={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(result);
                   
                    k++,l--;
                      while(k<l&&nums[k]==nums[k-1])
                      k++;
                      while(k<l&&nums[l]==nums[l+1])
                      {
                        l--;
                      }
                 }
            }
        }
      }

return ans;
        
    }
};