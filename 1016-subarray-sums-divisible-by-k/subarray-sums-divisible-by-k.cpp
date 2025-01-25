class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    unordered_map<int,int>m;
    int sum=0;
    int count=0;
    m[0]=1;
     for(int i=0;i<nums.size();i++)
     {
          sum+=nums[i];
          if(m.find(((sum%k)+k)%k)!=m.end())
          {
            count+=m[(((sum%k)+k)%k)];
          }

          m[(((sum%k)+k)%k)]++;
     }

return count;
    }
};