class Solution {
public:
    int countElements(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> umap;
        for(int i=0; i<n; i++) {
            umap[arr[i]] = 1;
        }
        
        int cnt = 0;
        for(int i=0; i<n; i++) {
            for(auto x: umap) {
                if(arr[i]+1 == x.first)
                    cnt++;
            }
        }
        return cnt;
    }
};
