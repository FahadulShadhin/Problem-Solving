#include<bits/stdc++.h>
#define MX 26
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int test;
    cin>>test;
     
    int j=1;
    while(test--){
        int n, k;
        cin>>n>>k;
 
        char ara[MX] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
       
        cout << "Case " << j++ << ":\n";
       
        int x = 0;
        do {
            for(int i=0; i<n; i++) cout<<ara[i]; cout<<endl;
            x++;
        } while(next_permutation(ara, ara+n) && x<k);
    }
 
    return 0;
}