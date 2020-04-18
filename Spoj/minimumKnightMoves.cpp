// https://www.spoj.com/problems/NAKANJ/
#include<bits/stdc++.h>
using namespace std;

long long x[10] = { 0, -2, -2, -1, -1, 1, 1, 2, 2 };
long long y[10] = { 0, -1, 1, -2, 2, -2, 2, -1, 1 };

long long bfs(long long a1, long long b1, long long a2, long long b2){
    long long moves[9][9];
    long long visited[9][9];
    memset(moves, 0, sizeof(moves));
    memset(visited, false, sizeof(visited));
    pair<long long, long long> p;
    queue< pair<long long, long long> > q;
    p.first = a1;
    p.second = b1;
    q.push(p);
    visited[a1][b1] = 1;
    while(!q.empty()){
        p = q.front();
        q.pop();
        if(p.first == a2 and p.second == b2) return moves[a2][b2];
        for(long long i=1; i<=8; i++){
            long long m = p.first + x[i];
            long long n = p.second + y[i];
            if(m>8 or m<1 or n>8 or n<1) continue;
            else{
                visited[m][n] = 1;
                moves[m][n] = moves[p.first][p.second] + 1;
                q.push( make_pair(m,n) );
            }
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    long long test;
    scanf("%lld", &test);
    while (test--){
        char a1, a2;
        long long b1, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        long long ans = bfs((a1 - 'a'), b1, (a2 - 'a'), b2);
        printf("%lld\n", ans);
    }
    return 0;
}
