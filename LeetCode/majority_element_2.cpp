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