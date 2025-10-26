class Solution {
public:
      
      void rec(vector<int>& nums,int index, int target, vector<int>&current, vector<vector<int>>&ans, int &sum){
           
           if(sum==target){
             ans.push_back(current);
           }
      
          if(index==nums.size()|| sum>target){
            return ;
          }
        
        for(int i=index;i<nums.size();i++){
           
           if(i-1>=index && nums[i]==nums[i-1])continue;

             current.push_back(nums[i]);
            sum+=nums[i];
            rec(nums,i+1,target,current,ans,sum);

            sum-=nums[i];
            current.pop_back();
         }
      }
   


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

         int sum=0;
          vector<vector<int>>ans;
          vector<int>current;
          sort(candidates.begin(),candidates.end());
         
         rec(candidates,0,target,current,ans,sum);

         return ans;


    }
};