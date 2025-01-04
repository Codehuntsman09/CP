/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let count=0, maximum=0;
    const n = nums.length;
    
    for(let i=0; i<n; ++i) {
        if(nums[i] == 0) {
            count = 0;
        }
        else {
            count++;
            maximum = count > maximum ? count : maximum;
        }
    }
    return maximum;
};