class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> minHeap;
             vector<vector<int>>ans;
         if(k==1){
            vector<int>result={nums1[0],nums2[0]};
            ans.push_back(result);
            return ans;
         }

          for(int i=0;i<nums1.size() && i<k;i++){
            minHeap.push({nums1[i]+nums2[0],{i,0}});
          }


          while(!minHeap.empty()){

            auto top = minHeap.top(); 
             minHeap.pop();
             // index
            int i = top.second.first;
            int j = top.second.second;

            vector<int>result={nums1[i],nums2[j]};
              ans.push_back(result);

              if(ans.size()==k)return ans;

              if(j+1<nums2.size())
              minHeap.push({nums1[i]+nums2[j+1],{i,j+1} });

          }

return ans;
    }
};