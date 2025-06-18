class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     // question is not asking about kth largest distinct element its ask about k sorted largest ellement

     sort(nums.begin(),nums.end());
     return nums[nums.size()-k];
    }
};