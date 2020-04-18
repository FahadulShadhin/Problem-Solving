#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n, p;
    cin>>n;
    cin>>p;

    int total = n/2;
    int right = p/2;
    int left = total - right;

    if(left > right) cout<<right<<endl;
    else cout<<left<<endl;
   
    return 0;
}
