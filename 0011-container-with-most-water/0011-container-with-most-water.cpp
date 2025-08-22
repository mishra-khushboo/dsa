class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int lp = 0;
        int rp = height.size() - 1;
        while(lp < rp){
            int w = rp - lp;
            int h = min(height[lp],height[rp]);
            int a = h * w;
            ans = max(ans, a);
            height[lp] < height[rp] ? lp++ : rp--; 
        }
        return ans;
    }
};