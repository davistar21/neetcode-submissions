class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    //   =  
        unordered_set<char> window;
        int left = 0;
        int mx = 0;
        for (int right = 0; right < s.size(); right++) {
            char ch = s[right];
            while (window.count(ch)) {
                window.erase(s[left]);
                left++;
            }
            window.insert(ch);
            // while ()

            mx = max(right - left + 1, mx);
        }
        return mx;

    }
};
