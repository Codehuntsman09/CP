/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let count=0, maximum=0;
    const n = nums.length;
    
    for(let i=0; i<n; ++i) {
        if(nums[i] == 1) {
            count += 1;
            maximum = Math.max(maximum, count);
        }
        else count = 0;
    }
    return maximum;
};