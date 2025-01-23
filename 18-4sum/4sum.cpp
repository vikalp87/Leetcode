class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        set<vector<int>>s;

        for(int i=0;i<nums.size();i++)
        {
           
            for(int j=i+1;j<nums.size();j++)
            {
                  set<long long>m;
                for(int k=j+1;k<nums.size();k++)
                {
                  long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long fourthNo = target - sum;

                   if(m.find(fourthNo)!=m.end())
                   {
                  
                       vector<int>result={nums[i],nums[j],nums[k],int(fourthNo)};
                       sort(result.begin(),result.end());
                       s.insert(result);
                       
                   }
                   
                   m.insert(nums[k]);


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