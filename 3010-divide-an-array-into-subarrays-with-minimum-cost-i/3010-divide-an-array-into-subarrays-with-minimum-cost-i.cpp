class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int nm1 = INT_MAX,nm2 = INT_MAX;
        for(int i =1;i<nums.size();i++){
            if(nums[i]<nm1){
                nm2 = nm1;
                nm1 = nums[i];
            }else if(nums[i] < nm2){
                nm2 = nums[i];
            }
        }

        return nums[0] + nm1 + nm2;
    }
};