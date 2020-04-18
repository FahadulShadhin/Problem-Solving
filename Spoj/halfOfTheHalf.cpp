// https://www.spoj.com/problems/STRHH/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);
    while (test--){
        string s;
        cin >> s;
        int half = s.length() / 2;
        for(int i=0; i<half; i+=2) cout << s[i];
        printf("\n");
    }
    return 0;
}