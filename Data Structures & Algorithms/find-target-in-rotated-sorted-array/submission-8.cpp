class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left)/2;
            int MID = nums[mid];
            int LEFT = nums[left];
            int RIGHT = nums[right];

            if (target == MID) return mid;
            if (LEFT <= MID) {
                if (LEFT <= target && target < MID) right = mid - 1;
                else left = mid + 1;
            } else {
                if (MID < target && target <= RIGHT) left = mid + 1;
                else right = mid - 1;
            }
        }
        return -1;
    }
};
