#include<bits/stdc++.h>
#define LL long long
using namespace std;

void solve(int n, int m, vector<int>CPn, vector<int>CPm) {
    sort(CPn.begin(), CPn.end());
    sort(CPm.begin(), CPm.end());
    
    int i=0, j=0;
    LL sum = 0;
    while(i<n) {
        if(j<m and CPn[i] > CPm[j]) {
            i++;
            j++;
        } else {
            sum += CPn[i];
            i++;
        }
    }
    
    //for(int i=0; i<n; i++) cout << CPn[i] << " "; cout << endl;
    //for(int j=0; j<m; j++) cout << CPm[j] << " "; cout << endl;
    
    if(j == m) cout << sum << endl;
    else cout << "-1" << endl;
} 

int main() {
    int n, m;
    vector<int> CPn, CPm;
    cin >> n >> m;
    for(int i=0; i<n; i++) { int x; cin >> x; CPn.push_back(x); }
    for(int i=0; i<m; i++) { int y; cin >> y; CPm.push_back(y); }
    
    solve(n, m, CPn, CPm);
    
    
    return 0;
}
