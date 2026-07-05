class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        int left = 0;
        int right = num/2;

        while (left <= right) {
            int mid = left + (right - left)/2;
            long long sq = 1LL *  mid * mid;
            if (sq > num) right = --mid;
            else if (sq < num ) left = ++mid;
            else return true;
        }
        return false;
    }
};