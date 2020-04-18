#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N][N];

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) 
            cin >> A[i][j];

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(A[i][j] == 1 or A[N-j-1][i] == 1 or A[N-i-1][N-j-1] == 1 or A[j][N-i-1] == 1) 
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
