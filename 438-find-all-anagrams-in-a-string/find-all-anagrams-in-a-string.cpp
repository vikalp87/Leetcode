class Solution {
public:
 
    vector<int> findAnagrams(string s, string p) {
      vector<int>anafre(26,0);
      vector<int>winfre(26,0);
      vector<int>ans;
      int k=p.size();
      bool b=true;
     
      for(int i=0;i<p.size();i++)
      {
        anafre[p[i]-'a']++;
      }
      int i=0,j=0,n=s.size();
      while(j<n)
      {
        winfre[s[j]-'a']++;
        if(j-i+1<k){
            j++;
        }
        else
        {
            for(int l=0;l<winfre.size();l++)
            {
                if(winfre[l]!=anafre[l])
                {
                    
                     b=false;
                      break;
                }

            
            }
           if(b)
           {
            ans.push_back(i);
           }

           winfre[s[i]-'a']--;
               i++,j++;
               b=true;
            
        }
      }
      return ans;
    }
};