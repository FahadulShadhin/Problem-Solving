// Spoj: CSTREET - Cobbled streets 
// #mst
// https://www.spoj.com/problems/CSTREET/
#include<bits/stdc++.h>
#define MAX      1001
#define PII      pair<int, int>
#define pb(x)    push_back(x)
#define mp(x, y) make_pair(x, y)
using namespace std;

int prim(int source, vector<PII> graph[], bool visited[]) {
    priority_queue<PII, vector<PII>, greater<PII>> q;
    int minCost = 0;

    q.push( mp(0, source) );
    while (!q.empty()){
        PII p = q.top();
        q.pop();
        int cur = p.second;
        if( visited[cur] ) continue;
        else{
            minCost += p.first;
            visited[cur] = true;
        }
        for(int i=0; i<graph[cur].size(); i++){
            if( !visited[ graph[cur][i].second ] )
                q.push( graph[cur][i] );
        }
    }
    return minCost;
}

int main()
{
    //freopen("cs.txt", "r", stdin);
    int test, p, n, m, a, b, c;
    scanf("%d", &test);
    while(test--){
        vector<PII> graph[MAX];
        bool visited[MAX];
        memset(visited, false, sizeof(visited));

        scanf("%d %d %d", &p, &n, &m);
        for(int i=0; i<m; i++){
            scanf("%d %d %d", &a, &b, &c);
            graph[a].pb( mp(c, b) );
            graph[b].pb( mp(c, a) );
        }
        int ans = p * prim(1, graph, visited);
        printf("%d\n", ans);

        for(int i=0; i<n; i++) graph[i].clear();
    }
    return 0;
}