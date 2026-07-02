class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int leftPtr = 0;
        int rightPtr = numbers.size() - 1;

        while (leftPtr < rightPtr) {
            int l = numbers[leftPtr];
            int r = numbers[rightPtr];
            int sum = l + r;
            if (sum == target) {
                return {leftPtr+1, rightPtr+1};
            }
            if (sum < target) leftPtr++;
            else rightPtr--;
        }
        return {};
        
    }
};
