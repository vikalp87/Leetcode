class Solution {
public:
    int maxProfit(vector<int>& prices) {

//       int maxprofit=0;
//      for(int i=0;i<prices.size();i++)
//      {
//         for(int j=i;j<prices.size();j++)
//         {
//              maxprofit=max(maxprofit,(prices[j]-prices[i]));
//         }
//      }

// return maxprofit;

        int maxprofit=0;
        int  n=prices.size()-1;
        int maxi=prices[n];
        for(int i=n-1;i>=0;i--)
        {
           if(maxi>prices[i])
           {
            maxprofit=max(maxprofit,maxi-prices[i]);
           }
          
          maxi=max(maxi,prices[i]);
        }
        return maxprofit;

    }
};