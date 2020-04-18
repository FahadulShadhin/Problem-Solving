// https://www.spoj.com/problems/MST/
#include<bits/stdc++.h>
#define MAX       10001
#define LL        long long
#define PII       pair<long long, long long> 
#define pb(x)     push_back(x)
#define mp(x, y)  make_pair(x, y)
using namespace std;

LL prim(LL source, vector<PII> graph[], bool visited[]) {
    priority_queue<PII, vector<PII>, greater<PII>> q;
    LL minCost = 0;

    q.push( mp(0, source) );
    while( !q.empty() ){
        PII p = q.top();
        q.pop();
        LL cur = p.second;
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
    //freopen("prim.txt", "r", stdin);   
    vector<PII> graph[MAX];
    bool visited[MAX];
    memset(visited, false, sizeof(visited));

    LL N, M, i, j, k;
    scanf("%lld %lld", &N, &M);
    for(LL u = 0; u<M; u++){
        scanf("%lld %lld %lld", &i, &j, &k);
        graph[i].pb( mp(k, j) );
        graph[j].pb( mp(k, i) );
    }
    LL source = 1;
    LL minCost = prim(source, graph, visited);
    printf("%lld\n", minCost);

    return 0;
}