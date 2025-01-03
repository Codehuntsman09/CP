/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    var xOR = nums.length;

    for(let i=0; i<nums.length; ++i) {
        xOR = xOR ^ i ^ nums[i];
    }
    return xOR;
};