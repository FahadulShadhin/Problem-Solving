#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin>>n;
    vector<int> ara(n);
    for(int i=0; i<n; i++) cin>>ara[i];
    sort(ara.begin(), ara.end());

    vector<int> cnt(n, 1); 

    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(abs(ara[j] - ara[i]) <= 1) cnt[i]++;
            else break;
        }
    }
    //for(int i=0; i<cnt.size(); i++) cout<<cnt[i]<<" "; cout<<endl;
    cout<<*max_element(cnt.begin(), cnt.end())<<endl;

    return 0;
}
