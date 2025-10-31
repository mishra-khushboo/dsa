class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, left = 0;
        unordered_map<char, int> m;

        for (int right = 0; right < s.size(); right++) {
            if (m.find(s[right]) != m.end() && m[s[right]] >= left) {
                left = m[s[right]] + 1;  // move left pointer past duplicate
            }
            m[s[right]] = right;
            res = max(res, right - left + 1);  // update result here
        }

        return res;
    }
};
