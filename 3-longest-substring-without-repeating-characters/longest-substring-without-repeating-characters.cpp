class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>ans(256,0);
        int i=0,j=0;
        int maxi=0;
        while(j<s.size())
        {
               int ascii=s[j];
               ans[ascii]++;
                while(ans[ascii]>1)
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