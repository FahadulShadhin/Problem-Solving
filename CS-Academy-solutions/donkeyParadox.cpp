#include<bits/stdc++.h>
#define MAX 201
using namespace std;

int main() {
    int N, M, hx1, hy1, hx2, hy2;
    cin >> N >> M >> hx1 >> hy1 >> hx2 >> hy2;
    
    int cnt = 0;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            if( abs(i-hx1)+abs(j-hy1) == abs(i-hx2)+abs(j-hy2) ) 
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
