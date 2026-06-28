class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s: string, t: string): boolean {
        const mp = new Map<string, number>();

        for (const ch of s) {
            mp.set(ch, (mp.get(ch) ?? 0) + 1);
        }
        for (const ch of t) {
            mp.set(ch, (mp.get(ch) ?? 0) - 1);
            if (mp.get(ch) == 0) mp.delete(ch);
            if (mp.get(ch) < 0) return false;
        }
        return mp.size == 0;
    }
}
