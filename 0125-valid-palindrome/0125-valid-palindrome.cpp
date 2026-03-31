class Solution {
public:

    bool isAlphaNum(char ch){
        if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        

        string cleaned = "";
        for( char c : s){
            if(isalnum(c)){
                cleaned += tolower(c);
            }
        }
        int st = 0,end = cleaned.length() - 1 ;
        while(st < end){
            if(cleaned[st] != cleaned[end]){
                return false;
            }
            st++,end--;
        }

        // while(st < end){
        //     if(!isAlphaNum(s[st])){
        //         st++;
        //         continue;
        //     }
        //     if(!isAlphaNum(s[end])){
        //         end--;
        //         continue;
        //     }
        //     if(tolower(s[st]) != tolower(s[end])){
        //         return false;
        //     }
        //     st++;
        //     end--;
        // }
        return true;
    }
};