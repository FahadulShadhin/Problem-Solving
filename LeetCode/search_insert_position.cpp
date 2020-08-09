class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans;
        for(int i=0; i<n; i++) {
            if(nums[i] == target) {
                ans = i;
                break;
            }
            if(target > nums[n-1])
                ans = n;
            else if(target < nums[0])
                ans = 0;
            else if(nums[i] < target and nums[i+1] > target)
                ans = i+1;
        }
        return ans;
    }
};