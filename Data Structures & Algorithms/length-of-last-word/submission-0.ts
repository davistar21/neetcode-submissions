class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLastWord(s: string): number {
        const result = s.split(" ");
        const cleaned = result.filter((r) => r !== "");
        return cleaned[cleaned.length - 1].length;
    }
}
