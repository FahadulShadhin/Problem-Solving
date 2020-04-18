#include<bits/stdc++.h>
#define LL long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    for(int i=1; i<=t; i++) {
        LL n, m;
        cin>>n>>m;
 
        cout<<"Case "<<i<<": "<<(n*m)/2<<endl;
    }
 
    return 0;
}