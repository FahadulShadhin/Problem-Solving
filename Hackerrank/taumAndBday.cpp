#include<bits/stdc++.h>
using namespace std;

long taum_and_bday(long b, long w, long bc, long wc, long z) {
    if(bc > wc+z) {
        return ((b+w)*wc + (b*z));
    }
    else if(wc > bc+z) {
        return ((b+w)*bc + (w*z));
    }
    else {
        return (b*bc + w*wc);
    }
}

void solve() {
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--) {
        long b, w, bc, wc, z;
        cin >> b >> w;
        cin >> bc >> wc >> z;
        long ans = taum_and_bday(b, w, bc, wc, z);
        cout << ans << endl;
    }
}

int main() {
    solve();
    return 0;
}