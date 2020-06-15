class Solution {
public:
    int digitSquareSum(int n) {
        int sum = 0;
        while(n) {
            sum += (n%10) * (n%10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow, fast;
        slow = fast = n;
        do {
            slow = digitSquareSum(slow);
            fast = digitSquareSum(digitSquareSum(fast));
        } while(slow != fast);
        
        if(slow == 1 and fast == 1) return true;
        else return false;
    }
};
