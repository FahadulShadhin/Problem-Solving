class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = floor(nums.size()/2);
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;
        
        int ans;
        for(auto element: mp){
            if(element.second > n)
                ans = element.first;
        }
        return ans;
    }
};