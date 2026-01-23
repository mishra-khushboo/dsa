class Solution {
public:
    vector<vector<int>> ans;

    void solve(int idx, int target, vector<int>& arr, vector<int>& comb) {
        if (target == 0) {
            ans.push_back(comb);
            return;
        }

        if (target < 0 || idx == arr.size())
            return;

        // pick current element (multiple allowed)
        comb.push_back(arr[idx]);
        solve(idx, target - arr[idx], arr, comb);
        comb.pop_back();

        // move to next element
        solve(idx + 1, target, arr, comb);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> comb;
        solve(0, target, arr, comb);
        return ans;
    }
};
