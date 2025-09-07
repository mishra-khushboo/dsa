class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0,left = 0;
        int n = s.size();
        unordered_map<char,int> m;
        int right = 0;
        for(;right < n ;right++){
        
            if(m.find(s[right]) != m.end() && m[s[right]] >= left){
                res = max(res,right - 1 - left + 1);
                left = m[s[right]]+ 1;
            }
            m[s[right]] = right;
        }
        return max(res,right - 1 - left + 1);
    }
};