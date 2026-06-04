class Solution {
public:
    int trap(vector<int>& height) {
        // _=
        int n = height.size();
        vector<int> maxLeft(n,0);
        vector<int> maxRight(n,0);
        int totalWaterTrapped = 0;
        maxLeft[0] = height[0];
        for (int i = 1; i < n; i++) {
            maxLeft[i] = max(height[i], maxLeft[i-1]);
        }
        maxRight[n-1] = height[n-1];
        for (int i = n - 2; i >= 0; i--) {
            maxRight[i] = max(height[i], maxRight[i+1]);
        }
        for (int i = 0; i < n; i++) {
            int water = min(maxLeft[i], maxRight[i]) - height[i];
            totalWaterTrapped += water;
        }
        return totalWaterTrapped;
    }
};
