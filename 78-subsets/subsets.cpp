class Solution {
public:

   void rec(vector<int>& nums, int index, vector<int>&current, vector<vector<int>>&ans){

             if(index == nums.size())
             {
               ans.push_back(current);
                return ;
             }

             current.push_back(nums[index]);
             rec(nums,index+1, current,ans);
             current.pop_back();
              rec(nums,index+1, current,ans);
   }


   

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
              vector<int>current;
              rec(nums,0,current,ans);

        return ans;



    }
};