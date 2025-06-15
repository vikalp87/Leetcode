class Solution {
public:
    int mySqrt(int x) {

        if(x==0|| x==1)return x;
    
        for(int i=1;i<=x;i++){
             long long pow=i;
              pow=pow*i;
            if(pow==x){
                return i;
            }
            else if(pow>x){
               // no overflow
              return i-1;    
            }
        }
return 0;
    }
};