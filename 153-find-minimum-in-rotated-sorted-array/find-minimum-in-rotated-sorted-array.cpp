class Solution {
public:
    int findMin(vector<int>& nums) {

        int low = 0, high = nums.size() - 1;
        int ans = INT_MAX;

        while (low <= high) {
            int mid = low + ((high - low) / 2);
            

            // left part sorted so we get one minimum so fetch the minimum and
            // go toright part to find other sorted minimum
            if (nums[low] <= nums[mid]) {
                ans = min(ans, nums[low]);
                low = mid + 1;
            } else {
                if(mid+1<=high){
                ans = min(ans, nums[mid+1]);
                high = mid;
                }
            }
        }
        return ans;
    }
};