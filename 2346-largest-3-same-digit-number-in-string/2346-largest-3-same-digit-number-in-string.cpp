class Solution {
public:
    string largestGoodInteger(string num) {
    
        int n = num.size();
        char maxi = 0;

        
        for(int i = 0;i < n - 2;i++){
            if(num[i] == num[i + 1] && num[i + 1] == num[i + 2]){
                if(num[i] > maxi){
                    maxi = num[i];
                }
            }
        }
        if(maxi != 0){
            return string(3,maxi);
        }
        return "";

    }
};