// O(n) 
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> umap;
        int max_val = 0, cnt = 0;
        
        for(int i=0; i<n; i++) {
            if(nums[i] == 1) cnt += 1;
            else cnt += -1;
            
            if(cnt == 0) 
                max_val = i+1;
            else if(umap.find(cnt) == umap.end()) 
                umap[cnt] = i;
            else
                max_val = max(max_val, i - umap[cnt]);
        }
        return max_val;
    }
};
