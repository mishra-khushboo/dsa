class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.find(part);
        int m = part.length();
        while(n>=0){
            s.erase(n,m);
            n = s.find(part);
        }
        return s;
    }
};