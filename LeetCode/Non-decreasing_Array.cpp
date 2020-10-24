class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size(), cnt=0;
        for(int i=1; i<n; i++) {
            if(nums[i] < nums[i-1]) {
                if(i==1 or nums[i-2] <= nums[i]) {
                    nums[i-1] = nums[i];
                    cnt++;
                } else {
                    nums[i] = nums[i-1];
                    cnt++;
                }
            }
        }
        return (cnt > 1) ? false : true;
    }
};