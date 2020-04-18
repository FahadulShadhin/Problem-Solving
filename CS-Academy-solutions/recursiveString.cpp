#include<bits/stdc++.h>
#define LL long long
using namespace std;

LL len[37];

void number_of_appearances(int n) {
    len[0] = 1;
    len[1] = 1;
    len[2] = 1;
    for(int i=3; i<=n; i++) 
        len[i] = len[i-1] + len[i-2] + len[i-3]; 
}

string solve(int n, int k) {
    if(n == 0) return "a";
    if(n == 1) return "b";
    if(n == 2) return "c";
    if(k <= len[n-1]) return solve(n-1, k);
    else if(k-len[n-1] <= len[n-2]) return solve(n-2, k-len[n-1]);
    else return solve(n-3, k-(len[n-1]+len[n-2]));
}

int main() {
    int n, k;
    cin >> n >> k;
    number_of_appearances(n);
    if(k > len[n]) cout << "-1" << endl;
    else cout << solve(n, k) << endl;

    return 0;
}