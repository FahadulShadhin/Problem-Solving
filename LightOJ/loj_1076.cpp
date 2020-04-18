#include<bits/stdc++.h>
using namespace std;
 
#define MX 1001
int c[MX];
int n,m;
 
int container(int capacity) {
    int cnt = 1;
    int pour = 0;
    for(int i=0; i<n; i++) {
        if(c[i] > capacity) return INT_MAX;
        if(pour + c[i] <= capacity) pour += c[i];
        else{
            pour = c[i];
            cnt++;
        }
    }
    return cnt;
}
 
int binarySearch() {
    int mid;
    int low=0;
    int high=1000000000;
 
    for(int i=0; i<100; i++) {
        mid = (low+high)/2;
        if(container(mid) <= m) high = mid;
        else low = mid + 1;
    }
    return mid;
}
 
int main() {
    int test;
    scanf("%d",&test);
   
    for(int k=0; k<test; k++) {
        scanf("%d %d", &n, &m);
        for(int i=0; i<n; i++) scanf("%d", &c[i]);
 
        int ans = binarySearch();
        printf("Case %d: %d\n", k+1, ans);
    }
    return 0;
}