class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int i=0,j=0;
        vector<int>ans(26,0);
        int finalAns=0;
        while(j<s.size())
        {
            ans[s[j]-'a']++;
             while(ans[s[j]-'a']>=k)
             {
                finalAns+=(s.size()-j);
                ans[s[i]-'a']--;
                i++;

             }
           j++;
        }
        return finalAns;
       
    }
};