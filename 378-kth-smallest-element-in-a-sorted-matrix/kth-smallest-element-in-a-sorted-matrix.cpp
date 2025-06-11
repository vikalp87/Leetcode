class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       
        priority_queue<  pair<int,pair<int,int>>, vector<  pair<int,pair<int,int>>>, greater<  pair<int,pair<int,int>>>> minHeap;

        int ans;

        for(int i=0;i<matrix.size() && i<k;i++){
          minHeap.push({matrix[i][0], {i, 0}});

        }

        while(k && !minHeap.empty())
        {
            pair<int,pair<int,int>> p=minHeap.top(); 
            int i=p.second.first;
            int j=p.second.second;          
            minHeap.pop();
             
             if(j+1<matrix[0].size())
           minHeap.push({matrix[i][j+1], {i, j+1}});


               if(k==1){
                ans=p.first;
               }
               k--;

        }
        return ans;
    }
};