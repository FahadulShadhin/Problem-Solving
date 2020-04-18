#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; scanf("%d", &n);
    vector<int> ara;
    for(int i=0; i<n; i++) {
        int x; scanf("%d", &x);
        ara.push_back(x);
    }

    sort(ara.begin(), ara.end(), greater<int>());

    while(!ara.empty()) {
        int s = ara.size();
        printf("%d\n", s);

        for(int i=0; i<ara.size(); i++) ara[i] = ara[i] - ara[ ara.size() - 1 ];

        while(!ara.empty() and ara.back() == 0) ara.pop_back();
    }

    return 0;
}