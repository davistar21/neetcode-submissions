class Solution {
   public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            int partner;
            if (mid % 2 == 0)
                partner = mid + 1;
            else
                partner = mid - 1;
            if (nums[mid] == nums[partner]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return nums[left];
    }
};