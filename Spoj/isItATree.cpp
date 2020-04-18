// Spoj: PT07Y - Is it a tree
// https://www.spoj.com/problems/PT07Y/
#include<bits/stdc++.h>
#define MAX 20001
using namespace std;

vector<int> graph[MAX];
int nodes, edges;
int parent[MAX];
int size[MAX];

void make_set(){
    for(int i=0; i<MAX; i++){
        parent[i] = i;
        size[i] = 1;
    }
}

int find(int n){
    if(n == parent[n])
        return n;
    return parent[n] = find(parent[n]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b){
        if(size[a] < size[b]) 
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

bool isTree(){
    for(int u=1; u<=nodes; u++){
        for(int j=0; j<graph[u].size(); j++){
            int v = graph[u][j];
            if(find(u) == find(v)){
                return false;
                break;
            } 
            else Union(u, v);
        }
    }
    return true;
}

int main()
{
    make_set();
    scanf("%d %d", &nodes, &edges);
    int u, v;
    for(int i=0; i<edges; i++){
        scanf("%d %d", &u, &v);
        graph[u].push_back(v);
        //graph[v].push_back(u); // why directed ??? :/
    }
    if(isTree() == true)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}