#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T, r1, c1, r2, c2;
    cin>>T;
    for(int i=1; i<=T; i++){
      cin>>r1>>c1>>r2>>c2;
 
      if( abs(r1 - r2) == abs(c1 - c2))
             cout<<"Case "<<i<<": 1"<<endl;
 
      else{
        if( abs(r1 - r2)%2 == abs(c1 - c2)%2 )
               cout<<"Case "<<i<<": 2"<<endl;
 
        else
            cout<<"Case "<<i<<": impossible"<<endl;          
      }
    }
 
  return 0;
}