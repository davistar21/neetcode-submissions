class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int minimums = 0;
        sort(intervals.begin(), intervals.end());
        auto current = intervals[0];
        int i = 1;
        int n = intervals.size();
        while (i < n) {
            auto next = intervals[i];
            
            if (current[1] <= next[0]) {
                // the interval is safe;
                current = next;
            } else {
                
                current[1] = min(current[1], next[1]); //greedy, we stop the current interval to be the shorter or smaller value, basically the interval that ends first;
                minimums++;
            }
            i++;

        }
        return minimums;
    }
};
