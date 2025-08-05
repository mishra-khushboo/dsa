class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // brute force O(n^2)
            int n = nums.size();
        // int a = n/2 ;
        // for(int i = 0 ; i< n; i++){
        //     int count = 0;
        //     for(int j = i; j < n; j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //             if(count > a){
        //                 return nums[i];
        //             }
        //         }
        //     }
        // }
        // return nums[0];

        //sort O(nlogn)

        // sort(nums.begin(),nums.end());
        // int freq = 1; 
        // int ans = nums[0];
        // for(int i = 1; i < n; i++){
        //     if(nums[i] == nums[i - 1]){
        //         freq++;
        //     }else{
        //         freq = 1;
        //         ans = nums[i];
        //     }
        //     if(freq > n/2){
        //         return ans;
        //     }
        // }
        // return ans;

        //moore's algo

        int ans = 0;
        int freq = 0;
        for(int i =0;i< n;i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
        
    }
};