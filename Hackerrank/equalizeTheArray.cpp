// https://www.hackerrank.com/challenges/equality-in-a-array/problem

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ara[101];
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &ara[i]);

    int maxFreq = 0, cntFreq;

    for(int i=0; i<n; i++) {
        cntFreq = 0;
        for(int j=0; j<=i; j++) {
            if(ara[i] == ara[j]) cntFreq++;
        }
        maxFreq = max( maxFreq, cntFreq );
    }

    if(maxFreq == 1) printf("%d\n", n - 1);
    else printf("%d\n", n - maxFreq);

    return 0;
}