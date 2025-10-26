class Solution {
public:
   
   void rec(vector<int>& nums,int index, vector<int>&current,vector<vector<int>>&ans, set<vector<int>>&set){
       
       if(index==nums.size()){
         vector<int>p1(current);
         sort(p1.begin(),p1.end());

        auto p=set.insert(p1);
       if(p.second){
        ans.push_back(current);
       }
          return ;
       }
 
        current.push_back(nums[index]);
        rec(nums,index+1,current,ans,set);
        current.pop_back();
        rec(nums,index+1,current,ans,set);
}
 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
     vector<int>current;
     set<vector<int>>set;
     vector<vector<int>>ans;   
     rec(nums,0,current,ans,set);
      return ans;


    }
};