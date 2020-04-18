//https://www.hackerrank.com/challenges/repeated-string/problem
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    long long  n, cnt = 0;
    cin >> s >> n;
    long long  slength = s.length();
    for(long long  i=0; i<slength; i++) if(s[i] == 'a') cnt++;
    
    long long  div = n / slength;
    long long  remainder = n % slength;
    cnt = cnt * div;

    for(long long  i=0; i<remainder; i++) if(s[i] == 'a') cnt++;
    cout << cnt << endl;
    return 0;
}