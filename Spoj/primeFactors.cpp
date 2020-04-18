#include<bits/stdc++.h>
using namespace std;

int primes[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
int luckyNum[1001];

int primeFactors(int n)
{
    int cnt = 0;
    for(int i=0; primes[i] <= sqrt(n); i++){
        if(n % primes[i] == 0){
            cnt++;
            while(n % primes[i] == 0){
                n = n / primes[i];
            }
        }
    }
    if(n > 1) cnt = cnt + 1;

    return cnt;
}

void findLuckyNum()
{
    int k = 0;
    for(int i=30; i<=3000; i++){
        if(primeFactors(i) >= 3) luckyNum[k++] = i;
    }
}

int main()
{
    int test;
    cin>>test;

    findLuckyNum();

    while(test--){
        int n;
        cin>>n;

        cout<<luckyNum[n-1]<<"\n";
    }

    return 0;
}