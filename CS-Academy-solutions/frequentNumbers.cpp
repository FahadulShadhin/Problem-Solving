#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, num, freq[10007];
    cin >> n >> k;
    for(int i=0; i<n; i++) {
        cin >> num;
        freq[num]++;
    }

    int cnt = 0;
    for(int i=0; i<=1000; i++) 
        if(freq[i] >= k)
            cnt++;
    cout << cnt << endl;
    return 0;
}