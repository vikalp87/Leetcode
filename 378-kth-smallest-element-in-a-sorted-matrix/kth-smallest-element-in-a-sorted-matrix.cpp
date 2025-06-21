class Solution {
public:

  int upperBound(vector<vector<int>>& matrix,int target){

      int count=0;
       for(int i=0;i<matrix.size();i++){
           
         vector<int>nums=matrix[i];
           int low=0,high=nums.size()-1;
           int ans=-1;
           while(low<=high)
        {
            int mid=low+((high-low)/2);
             
             if(nums[mid]>target){
                ans=mid;
                high=mid-1;
             }
             else{
                low=mid+1;
             }

        }
       
          if(ans==-1)ans=matrix[0].size();
          
           count+=ans;

       }
      
      return count;

  }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       
        // priority_queue<  pair<int,pair<int,int>>, vector<  pair<int,pair<int,int>>>, greater<  pair<int,pair<int,int>>>> minHeap;

        // int ans;

        // for(int i=0;i<matrix.size() && i<k;i++){
        //   minHeap.push({matrix[i][0], {i, 0}});

        // }

        // while(k && !minHeap.empty())
        // {
        //     pair<int,pair<int,int>> p=minHeap.top(); 
        //     int i=p.second.first;
        //     int j=p.second.second;          
        //     minHeap.pop();
             
        //      if(j+1<matrix[0].size())
        //    minHeap.push({matrix[i][j+1], {i, j+1}});


        //        if(k==1){
        //         ans=p.first;
        //        }
        //        k--;

        // }
        // return ans;

        int rows=matrix.size(), column=matrix[0].size();


           int low=matrix[0][0],high=matrix[rows-1][column-1];
           while(low<high){
            int mid=low+((high-low)/2);

             int count=upperBound(matrix,mid);
            if(count>=k){
                high=mid;
            }
            else{
                low=mid+1;
            }
           }
        return low;

    }
};