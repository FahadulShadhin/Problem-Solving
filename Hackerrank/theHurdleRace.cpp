#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> ara(n);
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        ara.push_back(x);
    }

    int mx = *max_element(ara.begin(), ara.end());

    if(k >= mx) cout<<"0"<<endl;
    else cout<<(mx - k)<<endl;

    return 0;
}