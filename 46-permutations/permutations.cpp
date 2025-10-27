class Solution {
public:
 
void allPermutation(vector<int>&nums,int index, set<vector<int>>&s){

    
     for(int i=index;i<nums.size();i++){
          swap(nums[index],nums[i]);
         s.insert(nums);
         allPermutation(nums,index+1,s);
         swap(nums[index],nums[i]);
     }   

}



    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
      set<vector<int>>s;
     allPermutation(nums,0,s);

for(auto i:s){
    ans.push_back(i);
}


      return ans;


    }
};