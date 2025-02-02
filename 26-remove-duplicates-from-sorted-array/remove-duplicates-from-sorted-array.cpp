class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
    //  set<int>s;
    //  for(int i=0;i<nums.size();i++)
    //  {
    //     s.insert(nums[i]);
    //  }
    //  int j=0;
    // for(auto i:s)
    // {
    //     nums[j++]=i;
    // }

    // for(int i=j;i<nums.size();i++)
    // {
    //     nums[i]=-101
    //     ;
    // }
 

    //  return s.size();
int i=0,j=0;
int n=nums.size();
bool b=false;
int count=0;
while(i<n)
{
    if(i-1>=0&&nums[i-1]==nums[i])
     {
             while(i<n&&nums[i]==nums[i-1])
             {
                i++;
             }
             if(i<n)
             {
                nums[j++]=nums[i++];
                count++;
             }
             b=true;

     }
     else
     {
        if(b){
        nums[j]=nums[i];
         }
        
        count++;
        i++;j++;
     }  

}
     
     return count;


    }
};