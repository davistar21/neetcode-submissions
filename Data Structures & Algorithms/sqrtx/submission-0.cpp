class Solution {
public:
    int mySqrt(int x) {
        if (x < 1) return 0;
        if (x == 1) return 1;
        int left = 0;
        int right = x/2;

        while (left <= right) {
            int mid = left + (right - left)/2;
            long long sq = (long long)mid * mid;
            long long nsq = 1LL * (mid + 1) * (mid + 1);
            if (sq == x) return mid;
            else if (sq > x) right = --mid;
            else if (sq < x && x < nsq) {
                return mid;
            } else if (sq < x && x >= nsq) left = ++mid;
            
        }
        return 0;
    }
};