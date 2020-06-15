class Solution {
public:   
    // O(n)....
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int current_sum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            current_sum += nums[i];
            if(current_sum > max_sum) max_sum = current_sum;
            if(current_sum < 0) current_sum = 0;
        }
        return max_sum;
    }
    
    
    /* using divide&conquer.....O(nlog(n))
    int max(int a, int b) {return (a>b)? a: b;}
    int max(int a, int b, int c) {return max(max(a,b),c);}
    
    int crossingMax(vector<int>& nums, int left, int mid, int right) {
        int sum = 0;
        int l_sum = INT_MIN;
        for(int i=mid; i>=left; i--) {
            sum += nums[i];
            if(sum > l_sum) l_sum = sum;
        }
        int r_sum = INT_MIN;
        sum = 0;
        for(int i=mid+1; i<=right; i++) {
            sum += nums[i];
            if(sum > r_sum) r_sum = sum;
        }
        return l_sum + r_sum;
    }
    
    int solve(vector<int> nums, int left, int right) {
        if(left == right) return nums[left];
        
        int mid = (left+right)/2;
        return max(solve(nums, left, mid), solve(nums, mid+1, right), crossingMax(nums, left, mid, right));
    }
    
    int maxSubArray(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        return solve(nums, left, right);
    }*/
};
