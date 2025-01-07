class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //brute force
        // check for every index the possible anagrams and if all the index done then mark the index as "" due to this it cannot store duplicate anagram
        //TC -: o(n3)-> two loops and one for checking its is anagram or not
        //sc-: auxilliary space=o(size of particular length) total space=o(size of particular string )+o(n);
         unordered_map<string,vector<string>>m;
         vector<vector<string>>ans;
      for(int i=0;i<strs.size();i++)
      {
          string str=strs[i];
          sort(str.begin(),str.end());

          if(m.find(str)!=m.end())
          {
            m[str].push_back(strs[i]);
          }
          else
          {
               vector<string>ans1;
               ans1.push_back(strs[i]);
               m[str]=ans1;
          }
          
      }
    for(auto i:m)
    {
        ans.push_back(i.second);
    }
    return ans;
    }
};