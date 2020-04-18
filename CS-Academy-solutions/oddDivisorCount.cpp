#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int cntDiv[100001];
    for(int i=a; i<=b; i++) {
        for(int j=1; j<=i; j++) {
            if(i%j == 0) 
                cntDiv[i]++;
        }
    }
    int cnt = 0;
    for(int i=a; i<=b; i++)
        if(cntDiv[i] % 2 != 0)
            cnt++;
    cout << cnt << endl;
    
    return 0;
}