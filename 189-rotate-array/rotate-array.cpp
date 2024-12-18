class Solution {
public:
    void reverseArray(vector<int>& nums, int left, int right) {
        if(left >= right)
            return;
        
        int temp = nums[left];
        nums[left] = nums[right]; 
        nums[right] = temp;

        reverseArray(nums, left+1, right-1);
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverseArray(nums, 0, n-1);
        reverseArray(nums, 0, k-1);
        reverseArray(nums, k, n-1);
    }
};