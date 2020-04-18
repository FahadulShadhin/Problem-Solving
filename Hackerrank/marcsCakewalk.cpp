#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, ara[41];
    scanf("%lld", &n);
    for(long long i=0; i<n; i++) scanf("%lld", &ara[i]);

    sort(ara, ara+n, greater<int>());

    long long ans = 0;
    for(long long i=0; i<n; i++){
        ans += pow(2, i) * ara[i];
    }
    printf("%lld\n", ans);

    return 0;
}