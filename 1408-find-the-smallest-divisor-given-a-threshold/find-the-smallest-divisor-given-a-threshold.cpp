class Solution {
public:
    bool isValid(int mid, vector<int> nums, int threshold) {

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {

            sum=sum+ceil(nums[i] * 1.0/mid);
         }
       
        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1, high = *max_element(nums.begin(), nums.end());
        while (low < high) {
            int mid = low + ((high - low) / 2);
            if (isValid(mid, nums, threshold)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};