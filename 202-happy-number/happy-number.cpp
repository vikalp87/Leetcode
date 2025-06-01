class Solution {
public:
 int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}
    bool isHappy(int n) {
        // unordered_map<int, int> m;
     
        // int squares = 0;
       
        // m[n]++;
        // while (n != 0) {
        //     int remainder = n % 10;
        //     n = n / 10;
        //     squares += pow(remainder, 2);

        //     if (n == 0) {
               
        //       if (squares == 1) {
        //             return true;
        //         }

        //         if (m.find(squares) != m.end()) {
        //             return false;
        //         }
        //         m[squares]++;

        //         n = squares;
        //         squares = 0;
        //     }
        // }
        // return false;

        int slow=n,fast=n;
       while(fast!=1){
        slow=sumOfSquares(slow);
        fast=sumOfSquares(sumOfSquares(fast));

        if(fast==slow && fast !=1)return false;

      }

     return true;
    }
};