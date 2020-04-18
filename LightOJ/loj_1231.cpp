#include<bits/stdc++.h>
#define MOD 100000007
using namespace std;
 
int coinChange(int i, int n, int k, int A[], int C[], int dp[][1001]) {
    if(i >= n) {
        if(k == 0) return 1;
        else return 0;
    }
    else if(dp[i][k] != -1) return dp[i][k];
    else {
        int r = 0;
        for(int j=1; j<=C[i]; j++){
            if(j*A[i] <= k){
                r += coinChange(i+1, n, k - j*A[i], A, C, dp) % MOD;
            }
            else
                break;
        }
        r += coinChange(i+1, n, k, A, C, dp) % MOD;
 
        return dp[i][k] = r % MOD;
    }
}
 
int main() {
    //freopen("p1231.txt", "r", stdin);
 
    int test;
    scanf("%d", &test);
    for(int i=1; i<=test; i++) {
        int n, k, A[1001], C[1001];
        scanf("%d %d", &n, &k);
        for(int i=0; i<n; i++) scanf("%d", &A[i]);
        for(int i=0; i<n; i++) scanf("%d", &C[i]);
 
        int dp[51][1001];
        memset(dp, -1, sizeof(dp));
 
        int ans = coinChange(0, n, k, A, C, dp);
        printf("Case %d: %d\n", i, ans);
    }
 
    return 0;
}