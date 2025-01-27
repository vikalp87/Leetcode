class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//       n int count=1;
//        int maxi=0;
//        int n=nums.size();
// sort(nums.begin(),nums.end());
//        for(int i=0;i<n;i++)
//        {
//            if(i+1>1&&abs(nums[i]-nums[i-1]==1))
//             {
//                 count++;
//                 maxi=max(maxi,count);
//             }
//             else
//             {
//                 if(i+1<=1)
//                 {
//                     maxi=max(maxi,count);
//                 }

//                 if(i+1>1&&nums[i]-nums[i-1]!=0)
//                    count=1;
//             }

            
//        }
//            return maxi;


      int count=1;
      int maxi=0;
      unordered_set<int>s;
      for(int i=0;i<nums.size();i++)
      {
        s.insert(nums[i]);
      }
      // calculate maximum posiible sequence for one interation
    
      for(int i:s)
      {
        if(!(s.find(i-1)!=s.end()))
        {
        int ele=i+1;
        while(s.find(ele)!=s.end())
        {
            count++;
           
            ele++;
               
        }
        maxi=max(maxi,count);
         count=1;
        }
        
      }

return maxi;
    }
};