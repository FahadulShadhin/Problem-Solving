#include<bits/stdc++.h>
using namespace std;

int freq[101];

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        freq[x]++;
    }

   int r = 0;
   for(int i=0; i<=100; i++) {
       r+=freq[i]/2;
   }
   cout<<r<<endl;

    return 0;
}