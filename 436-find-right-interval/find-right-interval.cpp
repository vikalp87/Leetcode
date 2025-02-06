class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int>ans;
         
        for(int i=0;i<intervals.size();i++)
        {
            int index=-1;
            int mini=INT_MAX;
            for(int j=0;j<intervals.size();j++)
            {
                
                 if(intervals[j][0]>=intervals[i][1])
                {
                        
                        if(mini>intervals[j][0])
                        {
                            mini=intervals[j][0];
                            index=j;
                        
                        
                        }
                    }
                
                
                
            }
            ans.push_back(index);
        }
     return ans;   
    }
};