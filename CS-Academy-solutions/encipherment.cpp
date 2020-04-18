#include<bits/stdc++.h>
using namespace std;

int main() {
    char str[101], permutation[26];
    cin >> str;
    cin >> permutation;

    for(int i=0; str[i] != '\0'; i++) str[i] = permutation[ str[i] - 'a' ];
    cout << str << endl;
    
    return 0;
}
