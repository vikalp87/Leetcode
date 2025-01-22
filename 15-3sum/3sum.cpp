class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    //     vector<vector<int>>ans;
    //     set<vector<int>>s;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         for(int j=i+1;j<nums.size();j++)
    //         {
    //             for(int k=j+1;k<nums.size();k++)
    //             {
    //                 if(nums[i]+nums[j]+nums[k]==0)
    //                 {
    //                     vector<int>triplet={nums[i],nums[j],nums[k]};
    //                     sort(triplet.begin(),triplet.end());
    //                     s.insert(triplet);


    //                 }
    //             }
    //         }
    //     }
    //   for(auto i:s)
    //   {
    //     ans.push_back(i);
    //   }
    //   return ans;

   // better solution

    
    //   set<vector<int>>s;
    //   vector<vector<int>>ans;
    //  for(int i=0;i<nums.size();i++)
    //  {
    //      unordered_map<int,int>m;
    //     for(int j=i+1;j<nums.size();j++)
    //     {
    //         int searchInMap=-(nums[i]+nums[j]);

    //         if(m.find(searchInMap)!=m.end())
    //         {
    //             vector<int>triplet={nums[i],nums[j],searchInMap};
    //             sort(triplet.begin(),triplet.end());
    //             s.insert(triplet);
                
    //         }
    //         m[nums[j]]++;
    //     }
    //  }
    //   for(auto i:s)
    //   {
    //     ans.push_back(i);
    //   }
    //   return ans;


vector<vector<int>>ans;
sort(nums.begin(),nums.end());
for(int i=0;i<nums.size();i++)
{
      if (i != 0 && nums[i] == nums[i - 1]) continue;

    int j=i+1,k=nums.size()-1;

    while(j<k)
    {
        int target=-nums[i];
        int sum=nums[j]+nums[k];
        if(sum>target)
        {
           
           k--;
        }
        else if(sum<target)
        {
           
              j++;
        }
        else
        {
          vector<int>triplets={nums[i],nums[j],nums[k]};
          ans.push_back(triplets);
          j++,k--;
           while(j<k&&nums[j]==nums[j-1])
           {
              j++;
           }
           while(j<k&&nums[k]==nums[k+1])
           {
            k--;
           }

        }
    }
}
return ans;

    }
};