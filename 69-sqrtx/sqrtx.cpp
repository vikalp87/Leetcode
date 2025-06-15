class Solution {
public:
    int mySqrt(int x) {

//         if(x==0|| x==1)return x;
    
//         for(int i=1;i<=x;i++){
//              long long pow=i;
//               pow=pow*i;
//             if(pow==x){
//                 return i;
//             }
//             else if(pow>x){
//                // no overflow
//               return i-1;    
//             }
//         }
// return 0;

        int left=1,right=x;
        while(left<=right){
            int mid=left+((right-left)/2);
             long long pow=mid;
             pow*=mid;

            if(pow==x){
                return mid;
            }
            else if(pow<x){
                  left=mid+1;
            }
            else{
                  right=mid-1;
            }
        }
return left-1;

    }
};