#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t; cin>>t;
    while(t--){
    	int a, b, c;
    	cin>>a>>b>>c;
    	int x = abs(a-c);
    	int y = abs(b-c);

    	if(x > y) cout<<"Cat B"<<endl;
    	else if(x < y) cout<<"Cat A"<<endl;
    	else cout<<"Mouse C"<<endl;
    }
    return 0;
}
