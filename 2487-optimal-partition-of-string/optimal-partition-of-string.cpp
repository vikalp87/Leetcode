class Solution {
public:
    int partitionString(string s) {
        vector<int>ans(26,0);
        int partitions=0;
        for(int i=0;i<s.size();i++)
        {
            ans[s[i]-'a']++;
            if(ans[s[i]-'a']>1)
            {
                cout<<i<<endl;
               partitions++;
               for(int j=0;j<26;j++)
               {
                  ans[j]=0;
               }
               ans[s[i]-'a']++;
            }
        }
        return partitions+1;
    }
};