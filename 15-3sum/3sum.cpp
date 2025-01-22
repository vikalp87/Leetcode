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

     unordered_map<int,int>m;
      set<vector<int>>s;
      vector<vector<int>>ans;
     for(int i=0;i<nums.size();i++)
     {
        m[nums[i]]=i;
     }

     for(int i=0;i<nums.size();i++)
     {
        for(int j=i+1;j<nums.size();j++)
        {
            int searchInMap=-(nums[i]+nums[j]);

            if(m.find(searchInMap)!=m.end())
            {
                int index=m[searchInMap];
                if(index>i&&index>j)
                {
                    vector<int>triplet={nums[i],nums[j],searchInMap};
                        sort(triplet.begin(),triplet.end());
                         s.insert(triplet);
                }
            }
        }
     }
      for(auto i:s)
      {
        ans.push_back(i);
      }
      return ans;

    }
};