// https://csacademy.com/contest/archive/task/shoe-pairs/

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> v;
    int n, x;
    char c;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x >> c;
        v.push_back(make_pair(x, c));
    }

    int ans = 0;
    for(int size = 1; size<=100; size++) {
        int cntL = 0, cntR = 0;
        for(int j=0; j<v.size(); j++) {
            if(v[j].first == size && v[j].second == 'L') 
                cntL++;
            else if(v[j].first == size && v[j].second == 'R')
                cntR++;
        }
        ans += min(cntL, cntR);
    }

    cout << ans << "\n";

    return 0;
}