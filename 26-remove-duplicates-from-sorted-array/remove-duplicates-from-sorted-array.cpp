class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // set<int>s;
        // for(int i=0;i<nums.size();i++){
        //     s.insert(nums[i]);
        // }
   
        //   int index=0;
        // for(auto i:s){
        //   nums[index++]=i;
        // }

        // return s.size();

      int low=0;
    
      for(int i=1;i<nums.size();i++){
         
         if(nums[i]!=nums[low]){
            low++;
            nums[low]=nums[i];
         }
         
      }
   return low+1;
    }
};