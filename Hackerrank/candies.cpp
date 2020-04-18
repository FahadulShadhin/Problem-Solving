#include<bits/stdc++.h>
#define MX 100001
using namespace std;

int main() {
    long n, ara[MX], candies[MX], sum = 0;
    scanf("%ld", &n);
    for(long i=0; i<n; i++) {
        scanf("%ld", &ara[i]);
        candies[i] = 1;
       }

    for(long i=1; i<n; i++) 
        if(ara[i] > ara[i-1]) 
            candies[i] += candies[i-1];

    for(long i=n-2; i>=0; i--) 
        if(ara[i] > ara[i+1] and candies[i] < candies[i+1]+1) 
            candies[i] = candies[i+1]+1;

    for(long i=0; i<n; i++) sum += candies[i];
        
    printf("%ld\n", sum);

    return 0;
}