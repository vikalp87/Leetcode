class Solution {
public:
    int maxSubarrayLength(vector<int>& s, int k) {
        int i=0,j=0;
        int maximum=0;
        unordered_map<int,int>m;
        while(j<s.size())
        {
             m[s[j]]++;

            while(m[s[j]]>k)
            {
              m[s[i]]--;
               i++;
            } 


            maximum=max(j-i+1,maximum);
            j++;
        }
        return maximum;
    }
};