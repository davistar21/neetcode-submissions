class Solution {
private: 
    bool canShip(int capacity, vector<int>& weights, int D){
        int days = 1, currentLoad = 0;
        for (int pkg : weights) {
            currentLoad += pkg;
            if (currentLoad > capacity) {
                days++; 
                currentLoad = pkg;
            }
        }
        return days <= D;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        while (left <= right) {
            int mid = left + (right - left)/2;
            bool isShippable = canShip(mid, weights, days);
            if (isShippable) {
                right = --mid;
            } else left = ++mid;
        }
        return left;
    }
};