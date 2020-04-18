#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main() {
    int n, val;
    LL freq[100001];
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> val;
        freq[val%3]++;
    }
    LL ans = freq[0] * (freq[0]-1)/2 + freq[1] * freq[2];
    cout << ans << "\n";

    return 0;
}