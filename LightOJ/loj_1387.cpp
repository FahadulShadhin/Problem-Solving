#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
   
    int T, n, tk, sum = 0;
    char st[13];
    cin>>T;
   
    for(int i=1; i<=T; i++){
        cin>>n;
        cout<<"Case "<<i<<":"<<endl;
        sum = 0;
        while(n--){
            cin>>st;
           
            if(strcmp(st, "donate") == 0) {
                cin>>tk;
                sum += tk;
            }
            else cout<<sum<<endl;
        }  
    }  
    return 0;
}