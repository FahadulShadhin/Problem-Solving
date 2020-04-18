// Spoj: CCOMPS - Count Components
// https://www.spoj.com/problems/CCOMPS/

#include<bits/stdc++.h>
#define MAX 100001
using namespace std;

int nodes, edges;
vector<int> graph[MAX];
bool visited[MAX];

void dfs(int source){
    visited[source] = true;
    for(int i=0; i<graph[source].size(); i++){
        if(!visited[graph[source][i]])
            dfs(graph[source][i]);
    }
}

void connectedComps(){
    int cnt = 0;
    memset(visited, false ,sizeof(visited));
    for(int i=1; i<=nodes; i++){
        if(!visited[i]){
            dfs(i);
            cnt = cnt + 1;
        }
    }
    printf("%d\n", cnt);
}

int main()
{
    int u, v;
    scanf("%d %d", &nodes, &edges);
    for(int i=0; i<edges; i++){
        scanf("%d %d", &u, &v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    connectedComps();
    
    return 0;
}
