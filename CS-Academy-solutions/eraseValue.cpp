#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int ara[10007], freq[10007];
    cin >> n;
    int sum = 0;
    for(int i=0; i<n; i++) {
        cin >> ara[i];
        sum += ara[i];
        freq[ara[i]]++;
    }

    int max_val = 0;
    for(int i=0; i<n; i++) 
        if((ara[i] * freq[ara[i]]) > max_val)
            max_val = (ara[i] * freq[ara[i]]);

    cout << sum - max_val << endl;

    return 0; 
}