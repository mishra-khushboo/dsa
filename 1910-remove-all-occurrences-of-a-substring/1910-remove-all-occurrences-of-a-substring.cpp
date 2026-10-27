class Solution {
public:

    //find 
    int findPart(string s, string part){
        int n = s.size();
        int m = part.size();
        for(int i = 0; i <= n -m; i++){
            int j = 0;
            while(j < m && s[i+j] == part[j]){
                j++;
            }
            if(j == m ){
                return i;
            }
        }
        return -1;
    }
    //erase 

    string removeOccurrences(string s, string part) {
        while(findPart(s, part) != -1){
            int pos = findPart(s,part);
            string temp = "";
            for(int i = 0;i<pos;i++){
                temp += s[i];
            }
            for(int i = pos + part.size(); i<s.size();i++){
                temp += s[i];
            }
            s = temp;
        }

        return s; 
    }
};