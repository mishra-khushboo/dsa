// User function Template for C++

class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        // code here
        int sum = 0;
        while(n){
            int a = n % 10;
            n = n / 10;
            sum += a;
        }
        
        int b = sum;
        int m = 0;
        while(b){
            int r = b % 10;
            b = b/10;
            m = m * 10 + r;
        }
        if(m == sum){
            return 1;
        }
        return 0;
    }
};