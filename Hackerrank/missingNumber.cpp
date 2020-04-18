#include<bits/stdc++.h>
using namespace std;

#define MX 200002
#define SZ 10001

int main() {
    //freopen("input.txt", "r", stdin);

    int n, m, arr[MX], brr[MX];
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    scanf("%d", &m);
    for(int i=0; i<m; i++) scanf("%d", &brr[i]);

    int fr1[SZ], fr2[SZ];
    for(int i=0; i<SZ; i++) {
        fr1[i] = 0;
        fr2[i] = 0;
    }

    for(int i=0; i<n; i++) fr1[arr[i]]++;
    for(int i=0; i<m; i++) fr2[brr[i]]++;
 
    for(int i=0; i<SZ; i++) {
        int ans = fr2[i] - fr1[i];
        if(ans > 0) printf("%d ", i); 
    }
    printf("\n");

    return 0;
}