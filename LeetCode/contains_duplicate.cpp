class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        if(n==1) return false;
        
        // -----TLE-----
        // for(int i=0; i<n; i++) {
        //     for(int j=i+1; j<n; j++) {
        //         if(nums[i] == nums[j]) 
        //             return true;
        //     }
        // }
        // return false;
        // -------------
        
        unordered_map<int, int> freq;
        
        for(int i=0; i<n; i++) {
            freq[nums[i]]++;
        }
        
        for(auto i: freq){
            if(i.second > 1) return true;
        }
        return false;
    }
};