#include<bits/stdc++.h>
using namespace std;
 
int solve(int i, int j, int row, int col, int ara[][207], int dp[][207])
{
    if(dp[i][j] != -1) return dp[i][j];
   
    else if( i >= 0 && i < row && j >= 0 && j < col){
        if(ara[i][j] == 0) return 0;
        else{
            int r = INT_MIN;
            r = max( r, ara[i][j] + solve(i+1, j, row, col, ara, dp) );
            if( i < col-1 )
                r = max( r, ara[i][j] + solve(i+1, j+1, row, col, ara, dp) );
            else
                r = max( r, ara[i][j] + solve(i+1, j-1, row, col, ara, dp) );
 
            return dp[i][j] = r;
        }
    }
    else return 0;
}
 
int main()
{
    //freopen("in.txt", "r", stdin);
 
    int test, n, banana, L, ara[207][207], dp[207][207];
    scanf("%d", &test);
    for(int i=1; i<=test; i++){
        memset(ara, 0, sizeof(ara));
        scanf("%d", &n);
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                scanf("%d", &banana);
                ara[i][j] += banana;
            }
        }
        L = n-1;
        for(int i=n; i<2*n-1; i++){
            for(int j=0; j<L; j++){
                scanf("%d", &banana);
                ara[i][j] += banana;
            }
            L--;
        }
        
       memset(dp, -1, sizeof(dp));
       
       int ans = solve(0, 0, 2*n-1, n, ara, dp);
       printf("Case %d: %d\n", i, ans);
    }
 
    return 0;
}