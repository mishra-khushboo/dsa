class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        if(x % 10 == 0 && x != 0){
            return false;
        }
        long long  rev = 0;
        int org = x;
        while(x != 0){
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }

        return rev == org;
    }
};