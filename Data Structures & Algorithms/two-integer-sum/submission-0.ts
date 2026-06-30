class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums: number[], target: number): number[] {
        let mp = new Map<number, number>();

        for (let i = 0; i < nums.length; i++) {
            let num = nums[i];
            let diff = target - num;
            // mp.set(i, diff)
            if (mp.has(num)) {
                return [mp.get(num), i];
            }
            mp.set(diff, i)
        }
    }
}
