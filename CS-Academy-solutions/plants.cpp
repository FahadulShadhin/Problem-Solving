#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M, T[101];
    cin >> N >> M;
    for(int i=0; i<M; i++) cin >> T[i];

    while(N--) {
        int cnt = 0, A, B;
        cin >> A >> B;

        for(int i=0; i<M; i++) 
            if(T[i] >= A && T[i] <=B)
                cnt++;
        cout << cnt << endl;
    }
    return 0;
}
