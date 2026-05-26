class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isPalindrome(s: string): boolean {
        s = s.replace(/[^a-z0-9]/gi, "").toLowerCase();
        let lP = 0;
        let rP = s.length - 1;
        while (rP > lP) {
            if (s[lP] !== s[rP]) return false;

                lP++;
                rP--;


        }
        return true
    }
}
