// Spoj: A Bug's Life
// https://www.spoj.com/problems/BUGLIFE/ 
#include<bits/stdc++.h>
using namespace std;

bool suspeciousOrNot(vector<int> graph[], int nodes)
{
    bool visited[nodes+1];
    int color[nodes+1];
    bool flag = false;
    memset(visited, false, sizeof(visited));
    memset(color, -1, sizeof(color));

    for(int i=1; i<=nodes; i++){
        if(visited[i] == false){
            queue<int> q;
            q.push(i);
            color[i] = 1;
            while( !q.empty() ){
                int cur = q.front();
                q.pop();
                visited[cur] = true;
                for(int j=0; j<graph[cur].size(); j++){
                    if( color[ graph[cur][j] ] == -1 ) 
                        color[ graph[cur][j] ] = !color[cur];
                    else if( color[ graph[cur][j] ] == color[cur] ){
                        flag = true;
                        break;
                    }
                    if( visited[ graph[cur][j] ] == false )
                        q.push( graph[cur][j] );
                }
                if(flag) break;
            }
        }
        if(flag) break;
    }
    return flag;
}

int main()
{
    //freopen("aBugsLife.txt", "r", stdin);
    int test;
    scanf("%d", &test);
    for(int i=1; i<=test; i++){
        int nodes, edges, u, v;
        scanf("%d %d", &nodes, &edges);
        vector<int> graph[nodes+1];
        for(int j=0; j<edges; j++){
            scanf("%d %d", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        printf("Scenario #%d:\n", i);
        if(suspeciousOrNot(graph, nodes))
            printf("Suspicious bugs found!\n");
        else
            printf("No suspicious bugs found!\n"); 
        for(int i=0; i<=nodes; i++) 
            graph[i].empty();
    }
    return 0;
}
