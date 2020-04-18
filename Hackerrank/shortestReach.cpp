// Hackerrank: Breadth First Search: Shortest Reach
// https://www.hackerrank.com/challenges/bfsshortreach/problem

#include<bits/stdc++.h>
using namespace std;

void shortestReach(vector<int> graph[], int n, int source) {
    bool visited[n+1];
    int level[n+1] = {-1};
    memset(visited, false, sizeof(visited));
    queue<int> q;

    q.push(source);
    level[source] = 0;
    visited[source] = true;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for(int i=0; i<graph[cur].size(); i++){
            if(!visited[graph[cur][i]]){
                level[graph[cur][i]] = level[cur] + 6;
                q.push(graph[cur][i]);
                visited[graph[cur][i]] = true;
            }
        }
    }

    for(int i=1; i<=n; i++) {
        if(i == source) continue;
        else{
            if(level[i] == 0) printf("-1 ");
            else printf("%d ", level[i]);
        }
    }
    printf("\n");
}

int main() {
    //freopen("shortestReach.txt", "r", stdin);
    int q;
    scanf("%d", &q);

    while(q--){
        int n, m, u, v, source;
        scanf("%d %d", &n, &m);
        vector<int> graph[n+1];

        for(int i=0; i<m; i++) {
            scanf("%d %d", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        scanf("%d", &source);
        shortestReach(graph, n, source);

        for(int i=0; i<n; i++) graph[i].clear();
    }
    return 0;
}
