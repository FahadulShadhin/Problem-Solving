#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n, ara[700];
    cin >> n;
    for(int i=0; i<n; i++) 
        cin >> ara[i];
    
    int cnt = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if((ara[i] + ara[j]) % 2 != 0)
                cnt++;
        }
    }
    cout << cnt << endl;
    
    return 0;
}