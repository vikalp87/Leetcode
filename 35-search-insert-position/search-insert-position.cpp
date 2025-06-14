class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    
      int low=0,high=nums.size()-1;

    while(low<=high){
        int mid=low+((high-low)/2);
        if(nums[mid]==target){
            return mid;
        }
        // mid index cannot be our answer
        else if(nums[mid]>target){
                // ans lies on left side
                high=mid-1;
        }
        else{
                low=mid+1;
        }
        
    }   
    return low;;
    }
};