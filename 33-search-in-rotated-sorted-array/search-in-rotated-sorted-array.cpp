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
            else if (mid - 1 >= low && nums[low] <=nums[mid - 1]) {
                   cout<<low<<high<<mid<<endl;
                if (target>=nums[low] && target<=nums[mid - 1]  ) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }

            }

            // right part sorted
            else {

                if (mid + 1 < nums.size()) {
                    if (target>=nums[mid + 1]  && target<=nums[high]) {
                      
                        low = mid + 1;
                    } else {
                          high = mid - 1;
                    }
                }
                else{
                    high--;
                }
            }
        }
        return -1;
    }
};