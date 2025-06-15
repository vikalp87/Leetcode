class Solution {
public:

   bool eat(int mid, vector<int>piles, int h){
         
          int eatingHours = 0;
            for (int i = 0; i < piles.size(); i++) {

                if (piles[i] <= mid) {
                    eatingHours++;
                } else {
                    eatingHours += (piles[i] / mid);
                    if (piles[i] % mid != 0) {
                        eatingHours++;
                    }
                }
            

        
            }

                if (eatingHours <= h) {
                     return true;
                }            
          
     return false;

   }
    int minEatingSpeed(vector<int>& piles, int h) {

      
        int left=1,right=*max_element(piles.begin(), piles.end());

        while(left<right){

            int mid=left+((right-left)/2);
           
              if(eat(mid,piles,h)){
                right=mid;
              }
              else{
                left=mid+1;
              }

        }

      return left;
    }
};