class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        // int right = 0;
        unordered_set<char> set;
        // int maxLength = 0;
        int length = 0;
        for (int right = 0; right < s.size(); right++) {
            char ch = s[right];
            if (set.count(ch)) {
                while (s[left] != ch) {
                    set.erase(s[left]);
                    left++;
                }
                left++;
                // length = right - left + 1;
            }
            set.insert(ch);
            // length++;
            length = max(right - left + 1, length);
        }
        return length;
    }
};