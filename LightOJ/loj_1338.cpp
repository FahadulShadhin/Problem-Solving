#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
 
    int T;
    int ara1[200], ara2[200];
    bool flag;
    string a, b, x;
 
    cin>>T;
    getline(cin, x);
    for(int i=1; i<=T; i++) {
          getline(cin, a);
          getline(cin, b);
 
          for(int j=0; j<26; j++) {
              ara1[j] = 0;
              ara2[j] = 0;
          }
 
          for(int j=0; a[j] != '\0'; j++) {
              if(a[j] >= 65 && a[j] <= 90) ara1[a[j] - 65]++;
              else if(a[j] >=97 && a[j] <= 122) ara1[a[j] - 97]++;
          }
 
          for(int k=0; b[k] != '\0'; k++) {
              if(b[k] >= 65 && b[k] <= 90) ara2[b[k] - 65]++;
              else if(b[k] >= 97 && b[k] <= 122) ara2[b[k] - 97]++;
          }
 
          flag = true;
          for(int j=0; j<26; j++) {
            if(ara1[j] != ara2[j]) {
              cout<<"Case "<<i<<": No"<<endl;
              flag = false;
              break;
            }
          }
          if(flag == true) cout<<"Case "<<i<<": Yes"<<endl;
    }
 
    return 0;
}