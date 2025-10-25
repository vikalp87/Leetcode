class Solution {
public:

   void rec(vector<int>&nums, int index, int target, int &sum, vector<int>&current, vector<vector<int>>&ans){

      if(sum==target){
            ans.push_back(current);
            return;
      }

      if(index==nums.size() || sum>target){
        return;
      }

      current.push_back(nums[index]);
      sum+=nums[index];

      rec(nums,index,target,sum,current,ans);
      current.pop_back();
      sum-=nums[index];
      rec(nums,index+1,target,sum, current,ans);

}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
          vector<vector<int>>ans;
          vector<int>current;
          int sum=0;
           rec(candidates, 0, target,sum, current,ans);
        return ans;

    }
};