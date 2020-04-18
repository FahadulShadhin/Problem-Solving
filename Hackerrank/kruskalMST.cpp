// Kruskal (MST): Really Special Subtree
// https://www.hackerrank.com/challenges/kruskalmstrsub/problem

#include<bits/stdc++.h>
using namespace std;
#define LL long long 
#define MAX 100001

LL g_nodes, g_edges;
pair<LL, pair<LL, LL>> graph[MAX];
LL parent[MAX], size[MAX];

void make_set() {
    for(LL i=0; i<MAX; i++){
        parent[i] = i;
        size[i] = 1;
    }
}

LL find(LL g) {
    if(g == parent[g])
        return g;
    return parent[g] = find(parent[g]);
}

void union_set(LL a, LL b) {
    a = find(a);
    b = find(b);
    if(a != b){
        if(size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

LL kruskal() {
    LL minCost = 0, cost;

    for(LL i=0; i<g_edges; i++) {
        LL x = graph[i].second.first;
        LL y = graph[i].second.second;
        cost = graph[i].first;

        if(find(x) != find(y)){
            minCost += cost;
            union_set(x, y);
        }
    }
    return minCost;
}

int main() {
    //freopen("kr.txt", "r", stdin);
    
    make_set();
    LL g_from, g_to, g_weight;
    scanf("%lld %lld", &g_nodes, &g_edges);

    for(LL i=0; i<g_edges; i++){
        scanf("%lld %lld %lld", &g_from, &g_to, &g_weight);
        graph[i] = make_pair( g_weight, make_pair(g_from, g_to) );
    }

    sort(graph, graph + g_edges);
    LL minCost = kruskal();
    printf("%lld\n", minCost);

    return 0;
}