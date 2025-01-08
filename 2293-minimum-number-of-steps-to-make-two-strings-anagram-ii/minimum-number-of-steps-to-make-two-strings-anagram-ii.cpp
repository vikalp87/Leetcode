class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>freq(26,0);
        int count=0;

        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(freq[t[i]-'a']>0)
            {
               freq[t[i]-'a']--;
            }
            else
            {
                count++;
            }
        }
        for(int i=0;i<freq.size();i++)
        {
            count+=freq[i];
        }
        return count;
    }
};