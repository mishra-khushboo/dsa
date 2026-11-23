class Solution {
public:

    bool isEven(int num){
        int count = 0;
        while(num > 0){
            count++;
            num = num / 10;
        }
        if(count %2 == 0){
            return true;
        }
        return false;
    }

    int findNumbers(vector<int>& nums) {
        int even = 0;
        for(int num : nums){
            if(isEven(num)){
                even++;
            }
        }
        return even;
    }
};