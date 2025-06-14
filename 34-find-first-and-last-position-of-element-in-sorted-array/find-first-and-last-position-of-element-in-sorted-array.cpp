class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
 
      vector<int>ans;
      int low=0,high=nums.size()-1;
      int leftindex=-1;

    while(low<=high){
        int mid=low+((high-low)/2);
        if(nums[mid]==target){
           leftindex=mid;
           high=mid-1;
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

    
 low=0,high=nums.size()-1;
 int rightIndex=-1;


   while(low<=high){
        int mid=low+((high-low)/2);
        if(nums[mid]==target){
           rightIndex=mid;
            low=mid+1;
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



    ans.push_back(leftindex);
       ans.push_back(rightIndex);
    return ans;

 





     




    }
};