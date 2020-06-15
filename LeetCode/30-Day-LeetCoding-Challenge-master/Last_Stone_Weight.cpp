class Solution {
public:
    /* using vector...
     int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1) {
            sort(stones.begin(), stones.end());
            int x = stones[stones.size()-1];
            int y = stones[stones.size()-2];
            if(x != y) {
                stones.pop_back();
                stones.pop_back();
                stones.push_back(x-y);
            } else {
                stones.pop_back();
                stones.pop_back();
            }
        }    
        if(!stones.empty()) return stones.front();
        else return 0;
    } */
    
    // using priority_queue...
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0; i<stones.size(); i++) pq.push(stones[i]);
        while(pq.size() > 1) {
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            if(x != y) pq.push(x-y);
        }
        if(pq.size() == 1) return pq.top();
        else return 0;
    }
};
