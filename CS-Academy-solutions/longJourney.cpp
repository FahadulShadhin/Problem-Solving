// https://csacademy.com/contest/archive/task/long_journey/

#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;

vector<int>graph[MAX];
bool visited[MAX];
int dist[MAX];
int dS[MAX], dA[MAX], dB[MAX];

void bfs(int source, int dist[]) {
    memset(visited, false, sizeof visited);

    queue<int> q;
    q.push(source);
    visited[source] = true;
    dist[source] = 0;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for(int i=0; i<graph[cur].size(); i++) {
            int next = graph[cur][i];
            if(!visited[next]) {
                visited[next] = true;
                dist[next] = dist[cur] + 1;
                q.push(next);
            }
        }
    }
} 

int main() {
    //freopen("input.txt", "r", stdin);

    int N, M, S, A, B, u, v;
    cin >> N >> M;
    cin >> S >> A >> B;
    for(int i=0; i<M; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    bfs(S, dS);
    bfs(A, dA);
    bfs(B, dB);

    int ans = 0;
    for(int i=1; i<=N; i++) {
        if(i == S || i == A || i == B) 
            continue;
        else
            if(dS[A] == dS[i] + dA[i] && dS[B] == dS[i] + dB[i]) 
                if(dS[i] > ans)
                    ans = dS[i];
    }
    cout << ans << "\n";

    return 0;
}