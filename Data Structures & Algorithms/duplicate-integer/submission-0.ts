class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums: number[]): boolean {
        const mp = new Set<number>();

        for (const num of nums) {
            if (mp.has(num)) return true;
            mp.add(num)
        }
        return false;
    }
}
