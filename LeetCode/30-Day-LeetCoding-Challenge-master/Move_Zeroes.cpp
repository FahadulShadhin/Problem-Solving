class Solution {
public:
    /* with extra space.
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int cnt = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] == 0) cnt++;
            else ans.push_back(nums[i]);
        }
        while(cnt--) ans.push_back(0);
        for(int i=0; i<n; i++) nums[i] = ans[i];
    }
    */
    
    // without extra spce.
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0, cnt = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] != 0) {
                nums[k++] = nums[i]; 
            }
        }
        for(int i=k; i<n; i++) nums[i] = 0;
    }
};