class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int>ans;
    //     ans=nums;
    //    sort(ans.begin(),ans.end());
    //    int left=0,right=ans.size()-1;
    //    int a,b;
       
    //    while(left<right)
    //    {
    //        if(ans[left]+ans[right]==target)
    //        {
    //             a=ans[left];
    //             b=ans[right];
    //             break;  
    //        }
    //        else if(ans[left]+ans[right]>target)
    //        {
    //              right--;
    //        }
    //        else
    //        {
    //                left++;
    //        }
    //    }
    
    // ans.clear();
    // for(int i=0;i<nums.size();i++)
    // {
    //     if(a==nums[i])
    //     {
    //       ans.push_back(i);
    //     }
    //     else if(b==nums[i])
    //     {
    //         ans.push_back(i);
    //     }
    //     else
    //     continue;


    // }

    // return ans;


    //hashinh
    map<int,int>m;
    vector<int>ans;
    for(int i=0;i<nums.size();i++)
    {
        int x=target-nums[i];
        if(m.find(x)!=m.end())
        {
            ans.push_back(m[x]);
            ans.push_back(i);

        }
        m[nums[i]]=i;
    }
    return ans;
    }
};