#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
   // freopen("input.txt", "r", stdin);
 
    int t;
    cin>>t;
    for(int i=1; i<=t; i++) {
        int n, a, b, c, vol;
        char st[202][202];
        int ara[202], max = 0, min = 8888888, loc_min, loc_max;
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>st[j];
            cin>>a>>b>>c;
            vol = a*b*c;
            ara[j] = vol;
 
            if(ara[j] < min){
                min = ara[j];
                loc_min = j;
            }
 
            if(ara[j] > max){
                max = ara[j];
                loc_max = j;
            }
        }
        if(max == min) 
            cout<<"Case "<<i<<": no thief\n";
        else 
            cout<<"Case "<<i<<": "<<st[loc_max]<<" took chocolate from "<<st[loc_min]<<endl;
    }
 
    return 0;
}