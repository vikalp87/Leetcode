class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
    //     int count=0;
         
    //     for(int i=0;i<intervals.size();i++)
    //     {
    //            bool isremoved=false;
    //         for(int j=0;j<intervals.size();j++)
    //         {
    //             if(i!=j)
    //             {
    //             if((intervals[i][0]>=intervals[j][0])&&intervals[i][1]<=intervals[j][1])
    //             {
    //               isremoved=true;
    //             }
    //             }
                
    //         }
    //         if(isremoved)
    //         {
    //             count++;
    //         }
    //     }

    //    return intervals.size()-count;
 sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
    return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);  // Sort by start, then by end (descending)
});
   int n=intervals.size();
   int count=0;
   int maxrange=-1;
   for(int i=0;i<n;i++)
  {
        if(intervals[i][1]<=maxrange)
        {
            count++;
        }
        maxrange=max(maxrange,intervals[i][1]);
        
  }

return intervals.size()-count;


    }
};