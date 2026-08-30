class Solution {
    /**
     * @param {number[]} nums
     * @return {number[][]}
     */
    threeSum(nums: number[]): number[][] {
        nums.sort((a, b) => a - b);
        let set = new Set<string>();
        let end = nums.length - 1;
        for (let i = 0; i < nums.length; i++) {
            const fixed = nums[i];
            let left = i + 1;
            let right = end;
            while (left < right) {
                let val = fixed + nums[left] + nums[right];
                if (val == 0) {
                    const arr = [fixed, nums[left], nums[right]];
                    set.add(JSON.stringify(arr));
                    // set.add(JSON.stringify([fixed, nums[left], nums[right]]));
                    left++;
                    right--;
                } else if (val > 0) {
                    right--;
                } else left++;
            }
        }
        let result: number[][] = [];
        for (const element of set) {
            let parsed = JSON.parse(element);
            result.push(parsed);
        }
        return result;
    }
}
