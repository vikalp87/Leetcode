class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
   
        
         int pos=m+n-1;
         int lg=m-1;
         int sm=n-1;

         while(sm>=0 && lg>=0){
         
         if(nums1[lg]>nums2[sm]){
            nums1[pos--]=nums1[lg--];
          
         }
         else if(nums1[lg]<nums2[sm]){
            nums1[pos--]=nums2[sm--];
          
           }
         else{
             nums1[pos--]=nums2[sm--];
             nums1[pos--]=nums1[lg--];
            
         }

 }

    while(sm>=0){
        nums1[pos--]=nums2[sm--];
    }
     
}
};