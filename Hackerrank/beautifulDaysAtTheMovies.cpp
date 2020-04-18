#include<bits/stdc++.h>
using namespace std;

long reverse_of_num(long n) {
    long reverse = 0;
    while(n != 0){
        reverse = reverse * 10;
        reverse = reverse + (n % 10);
        n = n / 10;
    }
    return reverse;
}

int main() {
    long n, m, k;
    cin>>n>>m>>k;

    long cnt = 0;
    for(int i=n; i<=m; i++){
        long r = reverse_of_num(i);
        long diff = abs(i - r);
        
        if(diff % k == 0) cnt++; 
    }
    cout<<cnt<<endl;

    return 0;
}