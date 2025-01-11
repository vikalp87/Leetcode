class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        unordered_map<char,int>m;
        int maxi=0;
        while(j<s.size())
        {
          m[s[j]]++;
            while(m[s[j]]>1)
            {
                 m[s[i]]--;
                 i++;
            }

          maxi=max(maxi,j-i+1);
           j++;

        }
        return maxi;
    }
};