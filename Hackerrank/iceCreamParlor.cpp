#include<bits/stdc++.h>
using namespace std;

void iceCreamParlor(int ara[], int m, int n) {
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            if(ara[i] + ara[j] == n){
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, m;
        int ara[100000];
        cin>>n>>m;
        for(int i=0; i<m; i++) cin>>ara[i];

        iceCreamParlor(ara, m, n);
    }

    return 0;
}