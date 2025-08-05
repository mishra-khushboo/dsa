class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int a = n/2 ;
        for(int i = 0 ; i< n; i++){
            int count = 0;
            for(int j = i; j < n; j++){
                if(nums[i] == nums[j]){
                    count++;
                    if(count > a){
                        return nums[i];
                    }
                }
            }
        }
        return nums[0];
        
    }
};