class Solution {
public:
    int minSteps(string s, string t) {
   unordered_map<char,int>m;
   int count=0;
   for(int i=0;i<s.size();i++)
   {
       m[s[i]]++;
   }
     for(int i=0;i<t.size();i++)
   {
      if(m[t[i]]>0)
      {
       m[t[i]]--;
      }
      else
      {
        count++;
      }

      
   }

  
return count;

    }
};