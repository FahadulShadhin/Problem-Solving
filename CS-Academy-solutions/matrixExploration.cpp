// Matrix Exploration
// https://csacademy.com/contest/archive/task/matrix_exploration/statement/

#include<bits/stdc++.h>
#define MAX 1007
using namespace std;

int n, m, k;
int grid[MAX][MAX];
char c;
queue<pair<int, int>> special;
pair<int, int> p;
int dist[MAX][MAX];
int x[4] = {1, -1, 0, 0};
int y[4] = {0, 0, 1, -1};

void bfs() {
    while(!special.empty()) {
        p = special.front(); 
        int ux = p.first;
        int uy = p.second;
        special.pop();

        for(int i=0; i<4; i++) {
            int vx = ux + x[i];
            int vy = uy + y[i];

            if(((vx>=0 && vx<n) && (vy>=0 && vy<m)) && grid[vx][vy] != 1 && dist[vx][vy] == -1) {
                dist[vx][vy] = dist[ux][uy] + 1;
                special.push(make_pair(vx, vy));
            }
        }
    }
}

int main() {
    // freopen("input.txt", "r", stdin);
    cin >> n >> m >> k;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> c;
            if(c == '.') grid[i][j] = 0;
            else grid[i][j] = 1;
        }
    }

    memset(dist, -1, sizeof(dist));

    while(k--) {
        int x, y;
        cin >> x >> y;
        x = x - 1;
        y = y - 1;
        dist[x][y] = 0;
        special.push(make_pair(x, y));
    }

    bfs();
    
    int sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(dist[i][j] != -1) 
                sum += dist[i][j];
        }
    }
    cout << sum << endl;

    return 0;
}
