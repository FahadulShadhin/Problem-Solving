#include<bits/stdc++.h>
using namespace std;

int main() {
    string st, ts;
    int k;
    cin>>st>>ts;
    cin>>k;

    int stSize = st.size();
    int tsSize = ts.size();

    int p = 0;
    while(p < min(stSize, tsSize) and st[p] == ts[p]) ++p;

    int vmin;
    if(k % 2 == (stSize + tsSize) % 2) vmin = stSize + tsSize - 2 * p;
    else vmin = stSize + tsSize + 1;

    if(k < vmin) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

    return 0;
}