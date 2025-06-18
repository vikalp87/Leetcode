class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int low = 0, high = nums.size() - 1;

        if (nums.size() == 1) {
            return nums[0];
        }

        while (low <= high) {

            int mid = low + ((high - low) / 2);

            if (nums[mid] == nums[high] && nums[mid] == nums[low]) {

                return nums[mid];
            }

            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            } else if (nums[mid] == nums[mid + 1]) {
                if ((mid - low + 2) % 2 == 0) {
                    low = mid + 2;
                } else {
                    high = mid - 1;
                }
            }
            // move to right part
            else {
                if ((mid - low + 1) % 2 == 0) {
                    low = mid + 1;
                } else {
                    high = mid - 2;
                }
            }
        }

        return -1;
    }
};