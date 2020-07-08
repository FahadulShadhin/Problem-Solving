#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    vector<pair<string, int>> s;
    cin >> n;

    for(int i=0; i<n; i++) {
        string word;
        cin >> word;
        s.push_back(make_pair(word, i));
    }

    sort(s.begin(), s.end());

    for(int i=0; i<n; i++) 
        cout << s[i].second+1 << " "; 
    cout << endl; 
}

int main() {
    solve();
}