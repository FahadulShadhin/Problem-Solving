// good explanation I found :) 
// https://medium.com/@mrunankmistry52/non-divisible-subset-problem-comprehensive-explanation-c878a752f057

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, ara[100001];
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> ara[i];

    int cnt[k];
    memset(cnt, 0, sizeof(cnt));

    for(int i=0; i<n; i++) {
        cnt[ara[i] % k]++;
    }
    // for(int i=0; i<k; i++) cout << cnt[i] << " "; cout << endl;

    int ans = min(1, cnt[0]);
    if(k % 2 == 0) ans += min(1, cnt[k/2]);
    for(int i=1; i<k/2+1; i++) {
        if(i != k-i) ans += max(cnt[i], cnt[k-i]);
    }
    cout << ans << endl;

    return 0;
}