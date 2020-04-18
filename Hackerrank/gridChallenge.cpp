// Hackerrank: Grid Challenge
// https://www.hackerrank.com/challenges/grid-challenge/problem

#include<bits/stdc++.h>
using namespace std;

bool solve(vector<string> &grid, int n) {
    for(int j=0; j<n; j++){
        for(int i=0; i<n-1; i++){
            if(grid[i][j] > grid[i+1][j])
                return false;
        }
    }
    return true;
}

int main() {
    //freopen("gridChallenge.txt", "r", stdin);
    int test, n;
    scanf("%d", &test);
    while (test--){
        scanf("%d", &n);
        vector<string> grid(n);
        for(int i=0; i<n; i++){
            cin >> grid[i];
        }
        for(int i=0; i<n; i++) 
            sort(grid[i].begin(), grid[i].end());

        if(!solve(grid, n)) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}