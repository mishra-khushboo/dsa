class Solution {
public:
    int climbStairs(int n) {
        int a = 0,b =1;
        int ans =0;

        while(n--){
            ans = a + b;
            a = b;
            b = ans;
        }
        return ans;
    }
};