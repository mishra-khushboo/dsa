class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        //code here.
        string a ;
        for(int i = 0;i< s.size();i++){
            if(s[i] != ' '){
                a = a + s[i];
            }
        }
        return a;
        
    }
};