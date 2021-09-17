// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);
        for(int i=0; i<n; i++) {
            if(nums[i] == target) {
                ans[0] = i;
                break;
            }
        }
        for(int j=n-1; j>=0; j--) {
            if(nums[j] == target) {
                ans[1] = j;
                break;
            }
        }
        if(ans[0] == -1 and ans[1] == -1) return {-1, -1};
        else return ans;
    }
};