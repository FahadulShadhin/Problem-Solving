#include<bits/stdc++.h>
using namespace std;

int countDistinct(vector <string> ara, int n) 
{ 
    int cnt = 1; 
  
    for (int i = 1; i < n; i++) { 
        int j = 0; 
        for (j = 0; j < i; j++) 
            if (ara[i] == ara[j]) 
                break; 

        if (i == j) 
            cnt++; 
    } 
    return cnt; 
}

int main()
{
    vector <string> ara;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        ara.push_back(s);
    }

    //for(int i=0; i<n; i++) cout<<ara[i]<<" "; cout<<"\n";

    int ans = countDistinct(ara, n);
    cout << ans << endl;

    return 0;
}

