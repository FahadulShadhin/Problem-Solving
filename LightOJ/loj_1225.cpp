#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T,num, n;
    cin>>T;
    for(int i=1; i<=T; i++) {
        cin>>num;
        n = num;
        int r = 0, remainder;
       
        while(n != 0){
            remainder = n % 10;
            r = r*10 + remainder;
            n /= 10;
        }
        //cout<<r;
        if(r == num) cout<<"Case "<<i<<": Yes"<<endl;
        else cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}