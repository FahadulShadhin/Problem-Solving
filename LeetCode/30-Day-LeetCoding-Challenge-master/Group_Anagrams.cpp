class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> umap;
        
        for(string s: strs) {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            umap[sorted].push_back(s);
        }
        
        for(auto x: umap) {
            ans.push_back(x.second);
        }
        
        return ans;
    }
};