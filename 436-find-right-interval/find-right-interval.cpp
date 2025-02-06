class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
       
       
        // for(int i=0;i<intervals.size();i++)
        // {
        //     int index=-1;
        //     int mini=INT_MAX;
        //     for(int j=0;j<intervals.size();j++)
        //     {
                
        //          if(intervals[j][0]>=intervals[i][1])
        //         {
                        
        //                 if(mini>intervals[j][0])
        //                 {
        //                     mini=intervals[j][0];
        //                     index=j;
                        
                        
        //                 }
        //             }
                
                
                
        //     }
        //     ans.push_back(index);
        // }

        
        
            map<int,int>m;
         int n=intervals.size();
        
        for(int i=0;i<n;i++)
        {
            m[intervals[i][0]]=i;
        }
        sort(intervals.begin(),intervals.end());
       
       
            vector<int>ans(n,-1);
            for(int i=0;i<intervals.size();i++)
            {
                auto it=m.lower_bound(intervals[i][1]);
                
                if(it!=m.end())
               ans[m[intervals[i][0]]]=it->second;
            }
       
     return ans;   
    }
};