#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int freq[10];
    int size = n.size();
    for(int i=0; i<size; i++) 
        freq[n[i] - '0']++;
    
    int flag = true;
    for(int i=1; i<=9; i++) {
        if(freq[0] != freq[i]) {
            flag = false;
            break;
        }
    }

    if(flag) cout << "1" << endl;
    else cout << "0" << endl;

    return 0;
}