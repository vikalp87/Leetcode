class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + ((high - low) / 2);
         

            if (nums[mid] == target) {
                return mid;

            }
            // left part sorted
            else if (nums[low] <=nums[mid]) {
                  
                  if (target>=nums[low] && target<=nums[mid]) {
                    high = mid;
                } else {
                    low = mid + 1;
                }

            }

            // right part sorted
            else {

                 if(mid+1<=high){
                  if (target>=nums[mid + 1]  && target<=nums[high]) {
                      
                        low = mid + 1;
                    } else{
                          high = mid;
                    }
                
                 }
            }
        }
       
       return -1;
    }
};