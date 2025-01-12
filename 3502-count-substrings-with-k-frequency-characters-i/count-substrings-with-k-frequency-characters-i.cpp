class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int left=0,right=0;
        vector<int>freq(26,0);
        int ans=0;
        while(right<s.size())
        {
            freq[s[right]-'a']++;
             while(freq[s[right]-'a']>=k)
             {
                ans+=(s.size()-right);
                freq[s[left]-'a']--;
                   left++;;

             }
           right++;
        }
        return ans;       
    }
};