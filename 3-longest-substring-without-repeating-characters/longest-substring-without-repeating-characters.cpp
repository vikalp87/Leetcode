class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
      vector<int>ans(256,0);
        int maxi=0;
        while(j<s.size())
        {
            ans[s[j]]++;
            while(ans[s[j]]>1)
            {
                 ans[s[i]]--;
                 i++;
            }

          maxi=max(maxi,j-i+1);
           j++;

        }
        return maxi;
    }
};