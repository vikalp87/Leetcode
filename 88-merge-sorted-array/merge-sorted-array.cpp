class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //    int i=n-1;
    //    int k=m+n-1;
    //    int j=m-1;
    //     if(j<0)
    //     {
    //         nums1=nums2;
    //     } 
    //     while(i>=0&&j>=0)
    //    {
    //        if(nums1[j]>nums2[i]){
    //            nums1[k]=nums1[j];
    //            k--,j--;
    //        }
    //        else
    //        {
    //            nums1[k]=nums2[i];
    //            k--,i--;
    //        }
          

    //    }
    //    while(i>=0)
    //    {
    //        nums1[k]=nums2[i];
    //        k--,i--;
    //    }

    int j=n-1;
    int p=m+n-1;
    int i=m-1;

    while(j>=0&&i>=0)
    {
        if(nums1[i]<nums2[j])
        {
            nums1[p]=nums2[j];
             j--;
             p--;
        }
        else if(nums1[i]>nums2[j])
        {
            swap(nums1[p],nums1[i]);
           i--;
           p--;
        }
        else
        {
            nums1[p]=nums2[j];
            p--;
            swap(nums1[p],nums1[i]);
            p--;
             i--,j--;
        }

    }
while(j>=0)
{
   nums1[p]=nums2[j];
   j--;

    p--;
}
// while(i>=0)
// {
//     swap(nums1[p],nums1[i]);
//     i--,p--;
// }

    }
};