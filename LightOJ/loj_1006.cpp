#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    //freopen("input.txt", "r", stdin);
 
    ll test;
    cin >> test;
 
    for(ll i=1; i<=test; i++){
        ll ans[10007];
        ll n;
 
        cin >> ans[0] >> ans[1] >> ans[2] >> ans[3] >> ans[4] >> ans[5] >> n;
        for(ll i=6; i<=n; i++) ans[i] = (ans[i-1] + ans[i-2] + ans[i-3] + ans[i-4] + ans[i-5] + ans[i-6]) % 10000007;
 
        cout << "Case " << i << ": " << ans[n] % 10000007 << endl;
    }
 
    return 0;
}