class Solution {
   public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums;
        vector<int> result;

        for (int n : nums1) {
            nums.insert(n);
        }

        for (int n : nums2) {
            if (nums.erase(n)) {
                result.push_back(n);
            }
        }
        return result;
    }
};