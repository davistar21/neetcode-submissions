class Solution {
    /**
     * @param {number[]} heights
     * @return {number}
     */
    maxArea(heights: number[]): number {
        let maxArea = 0;
        let left = 0;
        let right = heights.length - 1;

        for (let i = 0; i < heights.length; i++) {
            let width = right - left;
            let height = Math.min(heights[right], heights[left]);
            maxArea = Math.max(maxArea, width * height);
            if (heights[right] < heights[left]) {
                right--
            } else left++;
        }
        return maxArea;
    
    }
}
