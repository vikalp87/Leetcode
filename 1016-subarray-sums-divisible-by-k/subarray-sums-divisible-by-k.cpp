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
          int remainder=((sum%k)+k)%k;
          if(m.find(remainder)!=m.end())
          {
            count+=m[remainder];
          }

          m[remainder]++;
     }

return count;
    }
};