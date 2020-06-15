bool compare(const vector<int> &x, const vector<int> &y) {
        return ( (x[0] - x[1]) < (y[0] - y[1]));
}

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        int half = n/2;
        int ans = 0;
        
        sort(costs.begin(), costs.end(), compare);
        
        for(int i=0; i<half; i++) 
            ans += costs[i][0];
        for(int i=half; i<n; i++)
            ans += costs[i][1];
        
        return ans;
    }
};