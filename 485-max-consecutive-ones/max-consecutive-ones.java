class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int c = 0, m = 0;
        int n=nums.length;

        for(int i=0; i<n; ++i) {
            if(nums[i] == 0)
                c = 0;
            else {
                c+=1;
                m = m < c ? c : m;
            }
        }
        return m;
    }
}