#include<bits/stdc++.h>
using namespace std; 

int main() {
    int b, n, m;
    cin>>b>>n>>m;
    vector<int> ara1;
    vector<int> ara2;
    for(int i=0; i<n; i++){ int x; cin>>x; ara1.push_back(x); }
    for(int i=0; i<m; i++){ int y; cin>>y; ara2.push_back(y); }

    int max = 0;
    bool flag = false;
    vector<int> ans;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ans.push_back((ara1[i]+ara2[j]));
        }
    }
    
    int f;
    int s = ans.size();
    //for(int i=0; i<s; i++) cout<<ans[i]<<" "; cout<<endl;
    sort(ans.begin(), ans.end()); 
    for(int i=s-1; i>=0; i--) {
        if(ans[i] <= b){
            f = ans[i];
            break;
        }
        else f = -1;
    }
    cout<<f<<endl;
   
    return 0;
}














