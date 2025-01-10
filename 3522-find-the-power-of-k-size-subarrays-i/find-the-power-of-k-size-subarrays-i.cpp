class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int i=0,j=0,size= nums.size();
        int maxi=INT_MIN;
         bool isConsecutive =true;
        vector<int>ans;
         while(j<size)
        {
             maxi=max(maxi,nums[j]);
            if(j-i+1<k) {
               j++;
            }
            else
            {
                int maximum=0;
                for(int p=i+1;p<=j;p++){
                    maximum=max(maximum,nums[p]);
                   if(nums[p]-nums[p-1]!=1){
                        isConsecutive =false;
                           break; 
                    }
                      
                }
                 isConsecutive ?ans.push_back(maxi):ans.push_back(-1);
                
                maxi=maximum;
               i++,j++;
               isConsecutive =true;
            }
        }
        return ans;
    }
};