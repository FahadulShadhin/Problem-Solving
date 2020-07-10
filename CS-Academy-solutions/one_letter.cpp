#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string str;
    vector<char> ans;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> str;
        char smallest = str[0];
        for(int j=1; j<str.size(); j++) {
            if(str[j] < smallest) 
                smallest = str[j];
        }
        ans.push_back(smallest);
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++) 
        cout << ans[i];
    cout << endl;
}

int main() {
    solve();
    
    return 0;
}