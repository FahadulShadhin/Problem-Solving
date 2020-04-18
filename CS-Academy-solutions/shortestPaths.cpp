#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

vector<int> graph[MAX];
bool visited[MAX];
int path[MAX];

void shortest_path(int N, int M, int x) {
    queue<int> q;
    q.push(x);
    path[x] = 0;
    visited[x] = true;

    while(!q.empty()) {
        int currentNode = q.front();
        q.pop();
        for(int i=0; i<graph[currentNode].size(); i++) {
            int nextNode = graph[currentNode][i];
            if(!visited[nextNode]) {
                visited[nextNode] = true;
                q.push(nextNode);
                path[nextNode] = path[currentNode] + 1;
            }
        }
    }
    for(int i=1; i<=N; i++) {
        if(i == x) cout << "0" << " ";
        else if(path[i] == 0) cout << "-1" << " ";
        else cout << path[i] << " ";
    }
    cout << endl;
}

int main() {
    //freopen("input.txt", "r", stdin);
    int N, M, x;
    cin >> N >> M >> x;
    for(int i=0; i<M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    memset(visited, false, sizeof visited);
    shortest_path(N, M, x);

    return 0;
}
