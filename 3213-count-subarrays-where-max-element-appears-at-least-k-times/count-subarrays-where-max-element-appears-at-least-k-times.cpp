class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i=0,j=0;
        int maxi=INT_MIN;
        unordered_map<int,int>m;
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
        } 
        while(j<nums.size())
        {
            m[nums[j]]++;

           while(m[maxi]>=k)
           {
            ans+=(nums.size()-j);
            m[nums[i]]--;
              i++;
           }

            j++;
        }
return ans;
    }
};