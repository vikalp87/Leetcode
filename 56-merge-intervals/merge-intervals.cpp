class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
     sort(intervals.begin(),intervals.end());
     vector<vector<int>>ans;
     ans.push_back(intervals[0]);
     for(int i=1;i<intervals.size();i++)
    {
        vector<int>p=ans[ans.size()-1];
        vector<int>p1=intervals[i];
           if(p[1]>=p1[0])
           {
                 if(p[1]<=p1[1])
                 {
                    p[1]=p1[1];        
                  }
                
               ans[ans.size()-1]=p;         
           }
           else
           {
             ans.push_back(intervals[i]);
           }
    }
  return ans;
    }
};