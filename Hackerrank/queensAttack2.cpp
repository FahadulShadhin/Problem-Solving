#include<bits/stdc++.h>
#define MAX 100001
using namespace std;

set<pair<int, int>> aset;
int dx[8] = {-1, 1, 0, 0, -1, 1, -1, 1};
int dy[8] = {0, 0, -1, 1, -1, 1, 1, -1};

int solve(int n, int qr, int qc, int w, int y) {
    int cnt = 0;
    for(int i=0; i<8; i++) {
        int r = qr;
        int c = qc;
        while(true) {
            if(r<0 or r>=n or c<0 or c>=n or aset.count({r, c})) 
                break;
            r += dx[i];
            c += dy[i];
            cnt++;     
        }
    }
    return cnt;
}

int main() {
    int n, k, qr, qc, w, y;
    cin >> n >> k;
    cin >> qr >> qc;
    qr--;
    qc--;
    while(k--) {
        cin >> w >> y;
        w--;
        y--;
        aset.insert({w, y});
    }
    cout << solve(n, qr, qc, w, y) << "\n";
    return 0;
}

