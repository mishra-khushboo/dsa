class Solution {
public:

    int helper(int n , vector<int> &dp){
        if(n<=1)
            return n;

        if(dp[n] != -1){
            return dp[n];
        }

        dp[n] =  helper(n-1, dp) + helper(n - 2, dp);
        return dp[n];
    }

    int fib(int n) {
    //    vector<int>dp(n + 1,-1);
        if(n == 0)return 0;
    //    dp[1] = 1;
    //    dp[0] = 0;
      
    //    for(int i = 2;i<=n;i++){
    //     dp[i] = dp[i-1] + dp[i-2];
    //    }
       //return helper(n,dp);
       //return dp[n];

       int prev1 = 0;
       int prev2 = 1;
       for(int i = 2;i<=n;i++){
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
       }
       return prev2;
    }
};