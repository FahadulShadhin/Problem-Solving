#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--) {
        int n, k;
        cin>>n>>k;
        int a[1001];
        for(int i=0; i<n; i++) cin>>a[i];

        int cnt = 0;
        for(int i=0; i<n; i++){
            if(a[i] <= 0) cnt++;
        }

        if(cnt >= k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl; 
    }
    return 0;
}