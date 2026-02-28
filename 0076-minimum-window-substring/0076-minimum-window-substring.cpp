class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size()){
            return "";
        }

        vector<int> vec(128,0);

        for(char c : t){
            vec[c]++;
        }
        int remaining = t.size();
        int left =0,right=0;
        int minlen = INT_MAX;
        int minleft = 0;
        while(right < s.size()){
            if(vec[s[right]] > 0){
                remaining--;
            }
            vec[s[right]]--;
            right++;

            while(remaining == 0){
                if(right - left < minlen){
                    minlen = right - left;
                    minleft = left;
                }
                vec[s[left]]++;
                if(vec[s[left]] > 0){
                    remaining++;
                }
                left++;
            }
        }
        return minlen == INT_MAX ? "" : s.substr(minleft,minlen);
    }
};