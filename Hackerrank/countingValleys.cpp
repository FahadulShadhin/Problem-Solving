#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin>>n;
    string st; cin>>st;
    int s = st.length();

    int seaLevel = 0;
    int cnt = 0;
    for(int i=0; i<s; i++){
        if(st[i] == 'U') seaLevel++;
        if(st[i] == 'D') seaLevel--;

        if(seaLevel == 0 and st[i] == 'U') cnt++;
    }
    cout<<cnt<<endl;
   
    return 0;
}