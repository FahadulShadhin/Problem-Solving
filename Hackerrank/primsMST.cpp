// Prim's (MST) : Special Subtree
// https://www.hackerrank.com/challenges/primsmstsub/problem

#include<bits/stdc++.h>
using namespace std;
#define MAX 3001
#define LL long long 
#define PII pair<long long, long long>

LL prim(int start, vector<PII> graph[], bool visited[]) {
    priority_queue<PII, vector<PII>, greater<PII>> q;
    LL minimumCost = 0;

    q.push( make_pair(0, start) );
    while( !q.empty() ){
        PII p = q.top();
        q.pop();
        int cur = p.second;
        if( visited[cur] ) continue;
        minimumCost += p.first;
        visited[cur] = true;

        for(int i=0; i<graph[cur].size(); i++){
            if( !visited[ graph[cur][i].second ] )
                q.push( graph[cur][i] );
        }
    }
    return minimumCost;
}

int main() {
    //freopen("prim.txt", "r", stdin);

    vector<PII> graph[MAX];
    bool visited[MAX];
    memset(visited, false, sizeof(visited));

    LL n, m, x, y, r, start;
    scanf("%lld %lld", &n, &m);

    for(LL i=0; i<m; i++){
        scanf("%lld %lld %lld", &x, &y, &r);
        graph[x].push_back( make_pair(r, y) );
        graph[y].push_back( make_pair(r, x) );
    }

    scanf("%lld", &start);
    LL minimumCost = prim(start, graph, visited);
    printf("%lld\n", minimumCost);

    return 0;
}
