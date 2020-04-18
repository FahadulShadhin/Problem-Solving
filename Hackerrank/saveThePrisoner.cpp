#include<bits/stdc++.h>
using namespace std;

int main() {   
    int test;
    cin>>test;
    while(test--){
        int n, m, s;
        cin>>n>>m>>s;

        int a = (m+s-1)%n;
        if(a == 0) cout<<n<<endl;
        else cout<<a<<endl; 
    }
    
    return 0;
}