class Solution {
public:

   int upperBound(int m,int n,int target){
 
    int count=0;
   
    for(int i=1;i<=m;i++){
        if(i>target){
           break;
        }
        count+=min(target/i,n);
        
    
      
    } 
  
     return count;   

   }

    int findKthNumber(int m, int n, int k) {

//         priority_queue<pair<int, pair<int, int>>,
//                        vector<pair<int, pair<int, int>>>,
//                        greater<pair<int, pair<int, int>>>>
//             minHeap;
//          int ele;

//         for (int i = 1; i <= m && i<=k; i++) {
//             minHeap.push({i, {i, 1}});
//         }

//         while(k){
//          pair<int,pair<int,int>>p=minHeap.top();
//           ele=p.first;
//          int i=p.second.first;
//          int j=p.second.second;
// cout<<k<<" "<<ele<<endl;
//          minHeap.pop();

//           if(j+1<=n){
//           minHeap.push({i*(j+1),{i,j+1}});
//           }
            
//             k--;

//         }
//         return ele;

     int low=1, high=m*n;
     while(low<high){
        int mid=low+((high-low)/2);

        int count=upperBound(m,n,mid);
         
       // possible ans
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