class Solution {
public:
    string longestPrefix(string s) {
        // int n = s.size() - 1;
        // int j = n;
        // string pre = "";
        // string suf = "";
        // string ans = "";
        // for(int i = 0;i<n;i++){
        //     pre += s[i];
        //     while(s[j] != s[0]){
        //         j--;
        //     }
        //     suf = s[j] + suf;
        //     j--;
        //     if(pre == suf){
        //         ans = pre;
        //     }
        // }
        // return ans;

        vector<int> lps(s.size(),0);
        int pre = 0,suf = 1;
        while(suf < s.size()){
            //match
            if(s[pre] == s[suf]){
                lps[suf] = pre + 1;
                suf++;
                pre++;
            }
            //not match
            else{
                if(pre == 0){
                    lps[suf] = 0;
                    suf++;
                }else{
                    pre = lps[pre - 1];
                }
            }
        }
        return s.substr(0,lps[s.size() - 1]);
    }
};