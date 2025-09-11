class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "" ;
        int balance = 0;
        for(char c: s){
            if(c == '('){
                if(balance > 0){
                    result += '(';
                }
                balance ++;
            }
            else{
                balance --;
                if(balance > 0){
                    result += ')';
                }
            }
        }
        return result;
    }
};