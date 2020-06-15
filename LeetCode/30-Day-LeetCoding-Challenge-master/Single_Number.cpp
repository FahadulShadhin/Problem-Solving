class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        int temp = 0;
        for(int i=0; i<len; i++) temp ^= nums[i];
        return temp;
    }
};