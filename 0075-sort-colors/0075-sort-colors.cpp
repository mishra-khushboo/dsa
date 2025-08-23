class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0 = 0, c1 = 0, c2 = 0;
        int n = nums.size();

        for(int elm : nums){
            if(elm == 0){
                c0++;
            }else if(elm == 1){
                c1++;
            }else{
                c2++;
            }
        }
        int idx = 0;
        while(c0--){
            nums[idx++] = 0;
        }
        while(c1--){
            nums[idx++] = 1;
        }
        while(c2--){
            nums[idx++] = 2;
        }
    }
};