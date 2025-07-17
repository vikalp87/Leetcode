class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int count=0;
        m[0]=1;
        int prefixsum=0;
        
        // if an particular index subarray is our ans at index j then x-k must be presnt in map
        for(int i=0;i<nums.size();i++){
           prefixsum+=nums[i];
           
           if(m.find(prefixsum-k)!=m.end()){
              count+=m[prefixsum-k];
           }           

            m[prefixsum]++;
        }
        return count;
    }
};