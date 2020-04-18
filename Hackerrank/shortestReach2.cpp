#include<bits/stdc++.h>
#define MAX      1000001
#define INF      INT_MAX
#define PII      pair<int, int>
#define pb(x)    push_back(x)
#define mp(x, y) make_pair(x, y)
#define LL       long long
#define L        long
using namespace std;

vector<PII> graph[MAX];
LL nodes, edges;
LL dist[MAX];
bool visited[MAX];

void initialize() {
    for(LL i=0; i<MAX; i++) {
        dist[i] = INF;
        visited[i] = false;
    }
}

void dijkstra(LL source) {
    priority_queue<PII, vector<PII>, greater<PII>> q;
    q.push(mp(0, source));
    dist[source] = 0;
    visited[source] = true;

    while ( !q.empty() ) {
        PII p = q.top();
        LL cur = p.second;
        visited[cur] = true;
        q.pop();

        for(LL i=0; i<graph[cur].size(); i++){
            LL next = graph[cur][i].second;
            LL cost = graph[cur][i].first;
            if(dist[cur] + cost < dist[next]){
                dist[next] = dist[cur] + cost;
                q.push(mp(dist[next], next));
            }
        }
    }

    for(LL i=0; i<=nodes; i++) {
        if(i != source){
            if(dist[i] == INF) printf("-1\n");
            else printf("%lld ", dist[i]);
        }
    }
    printf("\n");
}

int main() {   
    //freopen("dj.txt", "r", stdin);

    int test;
    scanf("%d", &test);
    while(test--){
        initialize();

        scanf("%lld %lld", &nodes, &edges);
        LL u, v, weight;
        for(LL i=0; i<edges; i++){
            scanf("%lld %lld %lld", &u, &v, &weight);
            graph[u].pb( mp(weight, v) );
            graph[v].pb( mp(weight, u) );
        }

        LL source;
        scanf("%lld", &source);
        dijkstra(source);

        for(int i=0; i<nodes; i++) graph[i].clear();
    }
    return 0;
}
