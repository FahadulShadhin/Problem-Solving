// O(n) space
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = floor(nums.size()/3);
        unordered_map<int, int> mp;
        for(auto val: nums) {
            mp[val]++;
        }
        
        vector<int> ans;
        for(auto element: mp) {
            if(element.second > n)
                ans.push_back(element.first);
        }
        return ans;
    }
};



// O(1) space
// Moore voting algorithm
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate1 = 0, candidate2 = 0;
        int cnt1 = 0, cnt2 = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] == candidate1) cnt1++;
            else if(nums[i] == candidate2) cnt2++;
            else if(cnt1 == 0) {
                cnt1++;
                candidate1 = nums[i];
            }
            else if(cnt2 == 0) {
                cnt2++;
                candidate2 = nums[i];
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        int count1 = 0, count2 = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] == candidate1) count1++;
            else if(nums[i] == candidate2) count2++;
        }
        
        vector<int> ans;
        if(count1 > floor(n/3)) ans.push_back(candidate1);
        if(count2 > floor(n/3)) ans.push_back(candidate2);
        
        return ans;
    }
};
