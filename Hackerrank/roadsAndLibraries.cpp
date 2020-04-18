// Hackerrank: Roads and Libraries
// https://www.hackerrank.com/challenges/torque-and-development/problem
#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
#define L long
#define LL long long

vector<L> graph[MAX];
bool visited[MAX];

L dfs( L source )
{
    L count = 1; // source node included
    visited[source] = true;
    for(int i=0; i<graph[source].size(); i++)
        if( visited[ graph[source][i] ] == false )
            count = count + dfs( graph[source][i] );
    return count;
}

int main()
{
    //freopen("roadsAndLibraries.txt", "r", stdin);
    int test;
    scanf("%d", &test);
    while(test--){
        L n, m, clib, croad, u, v;
        scanf("%ld %ld %ld %ld", &n, &m, &clib, &croad);
        for(L i=0; i<m; i++){
            scanf("%ld %ld", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        L cost = 0;
        for(L i=1; i<=n; i++){
            if( visited[i] == false ){
                L nodes = dfs(i);
                cost = cost + clib;
                if(clib > croad) cost = cost + ( croad * (nodes - 1) );
                else cost = cost + ( clib * (nodes - 1) );
            }
        }
        printf("%ld\n", cost);
        for(int i=0 ; i<=n ; i++){
            graph[i].clear();
            visited[i] = false;
        }
    }
    return 0;
}