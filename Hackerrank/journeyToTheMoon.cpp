#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int n, p;
vector<int> graph[MAX];
bool visited[MAX];
int k = 0;
int comp[MAX];
int vertices;

void dfs(int source) {
    visited[source] = true;
    vertices++;
    for(int i=0; i<graph[source].size(); i++) {
        int nod = graph[source][i];
        if(!visited[nod])
            dfs(nod);
    }
}

void create_component_array() {
    k = 0;
    for(int i=0; i<n; i++) {
        if(!visited[i]) {
            vertices = 0;
            dfs(i);
            comp[k++] = vertices;
        }
    }
}

int main() {
    cin >> n >> p;
    for(int i=0; i<p; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    memset(visited, false, sizeof visited);
    create_component_array();
    //for(int i=0; i<k; i++) cout << comp[i] << " "; cout << endl;

    int sum = 0;
    int ans = 0;
    for(int i=0; i<k; i++) {
        ans += comp[i] * sum;
        sum += comp[i];
    }
    cout << ans << endl;

    return 0;
}
