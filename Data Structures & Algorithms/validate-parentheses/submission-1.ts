class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isValid(s: string): boolean {
        let st: string[] = [];
        let pairs: Record<string, string> = { "}": "{", "]": "[", ")": "(" };

        for (const char of s) {
            if (char == "{" || char == "[" || char == "(") {
                st.push(char);
                continue;
            }
            if (st.length == 0) return false;
            const top = st[st.length - 1];
            if (pairs[char] == top) {
                st.pop();
            } else return false;
        }
        return st.length == 0;
    }
}
