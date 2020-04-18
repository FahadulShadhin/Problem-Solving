#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--) {
        int n;
        cin>>n;
        
        if(n == 0) cout<<"1"<<endl;
        else{
            int height = 1;
            for(int i=1; i<=n; i++) {
                if(i % 2 == 0) height = height + 1;
                else height = height * 2;
            }

            cout<<height<<endl;
        }
    }

    return 0;
}