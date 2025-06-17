class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + ((high - low) / 2);
         

            if (nums[mid] == target) {
                return true;

            }

            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
    low++;
    high--;
}
            // left part sorted
            else if (mid - 1 >= low && nums[low] <=nums[mid - 1]) {
                   
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
        return false;
    }
};