class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_map<string,int>m;
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            sort(str.begin(),str.end());
           if(m.find(str)!=m.end()&&(i-m[str]==1))
           {
                  m[str]=i;
           }
           else
           {
            //stored in final ans
                m[str]=i;
              ans.push_back(words[i]);

           }
           
         }
         return ans;
    }
};