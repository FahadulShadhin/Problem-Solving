// spoj: aggressive cows #binary_search

#include<bits/stdc++.h>
using namespace std;

#define MX 100000

int n, c;
int pos[MX];

bool findMaxDistance(int x)
{
    int cowPosition = pos[0]; 
    int cows = 1; 

    for(int i=1; i<n; i++){
        if(pos[i] - cowPosition >= x){ 
            cowPosition = pos[i]; 
            cows++;
            if(cows == c) return true; 
        }
    }

    return false;
}

int binarySearch()
{
    int lo = 0, hi = pos[n-1];
    int maxDist = -1;

    while(hi > lo){
        int mid = (lo + hi) / 2;
        if(findMaxDistance(mid)){
            if(mid > maxDist) maxDist = mid;
            lo = mid + 1;
        }
        else hi = mid;
    }

    return maxDist;
}

int main()
{
    int test; scanf("%d", &test);
    while(test--){
        scanf("%d %d", &n, &c);
        for(int i=0; i<n; i++) scanf("%d", &pos[i]);

        sort(pos, pos+n);

        int ans = binarySearch();

        printf("%d\n", ans);
    }

    return 0;
}

