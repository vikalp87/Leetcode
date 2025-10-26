class Solution {
public:
    
    void rec(vector<int>&nums,int index,vector<int>&current, vector<vector<int>>&ans){

          ans.push_back(current);
         if(index==nums.size()){
            return;
         }

         for(int i=index;i<nums.size();i++){
            
            if(i-1>=index &&nums[i]==nums[i-1]){
                continue;
            }

           current.push_back(nums[i]);
            rec(nums,i+1,current,ans);
            current.pop_back();

         }

    }

 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>current;
        sort(nums.begin(),nums.end());
            
       rec(nums,0,current,ans);       
         return ans;
    }
};