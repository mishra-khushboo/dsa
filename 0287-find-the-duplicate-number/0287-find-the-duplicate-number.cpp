class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //t.c O(n),s.c O(n)
        // unordered_set<int> s;
        // for(int val: nums){
        //     if(s.find(val) != s.end()){
        //         return val;
        //     }
        //     s.insert(val);
        // }
        // return -1;

        //t.c O(n),s.c O(1)
        int slow = nums[0],fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast); 
        slow= nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};