class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

     int m=matrix.size(),n=matrix[0].size();

     int left=0, top=n-1;
        while(top>=0 && left<m)

       if(matrix[left][top]==target){
        return true;
       }
       else if(matrix[left][top]>target){
           top--;
       }
       else
       {
            left++;
       }

return false;
    
    
    }
};