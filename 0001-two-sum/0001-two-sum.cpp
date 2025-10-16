class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        //Time Complexity: O(n)
        //Space Complexity: O(n)
        unordered_map<int,int>m;
        vector<int>ans;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int first = nums[i];
            int sec = tar - first;
            if(m.find(sec) != m.end()){
                ans.push_back(m[sec]);
                ans.push_back(i);
                break;
            }
            m[first] = i;
        }
        return ans;
    }
};

//Time Complexity: O(n²)
//Space Complexity: O(1)
// for (int i = 0; i < nums.size(); i++) {
//         for (int j = i + 1; j < nums.size(); j++) {
//             if (nums[i] + nums[j] == target)
//                 return {i, j};
//         }
//     }
//     return {};