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
                    high = mid-1;
                } else {
                    low = mid + 1;
                }

            }

            // right part sorted
            else {

                  if (target>=nums[mid]  && target<=nums[high]) {
                      
                        low = mid + 1;
                    } else{
                          high = mid-1;
                    }
                
                 
            }
        }
       
       return -1;
    }
};