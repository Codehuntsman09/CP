class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        while(j < n) {
            if(nums[j] == 0) {
                break;
            }
            j++;
        }
            for(int i=j+1; i<n; ++i) {
                if(nums[i] != 0) {
                    swap(nums[i], nums[j]);
                    j++;
                }
            }
    }
};