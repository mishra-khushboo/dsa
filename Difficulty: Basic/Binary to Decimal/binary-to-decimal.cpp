class Solution {
  public:
    int binaryToDecimal(string& b) {
        // code here
        int sum = 0, mul = 1;
        
        for(int i = b.size() - 1;i>=0;i --){
            if(b[i] == '1'){
                sum  +=  mul;
            }
            mul *= 2;
            
        }
        return sum;
    }
};