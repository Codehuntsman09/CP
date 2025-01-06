class Solution {
public:
    bool isPalindrome(int x) {
        long lastDigit = 0, rev = 0;
        int temp = x;
        if(temp > 0) {
            while(temp != 0) {
                lastDigit = temp % 10;
                rev = rev * 10 + lastDigit;
                temp = temp / 10;
            }
        }
        return (x == rev);
    }
};