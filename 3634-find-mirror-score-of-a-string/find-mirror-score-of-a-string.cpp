class Solution {
public:
    long long calculateScore(string s) {
        long long score=0;
         unordered_map<int,vector<int>>m;
         m[s[0]-'a'].push_back(0);
         for(int i=1;i<s.size();i++)
         {
            int a=s[i]-'a';
            int findvalue=25-a;
            bool b=false;
            if(m.find(findvalue)!=m.end()&&m[findvalue].size()>0)
            {
              
                  score+=i- m[findvalue].back();
                
                   m[findvalue].pop_back();  
                     if(m[findvalue].empty())
                       m.erase(findvalue);
                
            }
            else
            {

                m[s[i]-'a'].push_back(i);
            }
            
          
             


         }       
        return score;
    }
};