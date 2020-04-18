#include<bits/stdc++.h>
#define mx 200007
using namespace std;

long main() {
    long n, m;
    cin>>n;
    long score[mx];
    for(long i=0; i<n; i++) cin>>score[i];
    cin>>m;
    long alice[mx];
    for(long i=0; i<m; i++) cin>>alice[i];

    long rnk[mx];
    for (long i=0;i<n;i++) {
        if (i==0) rnk[i] = 1;
        else {
            if (score[i] == score[i-1]) rnk[i] = rnk[i - 1];
            
            else rnk[i] = rnk[i - 1] + 1 ;
        }
    }

    long polong = n;
    for(long j=0; j<m; j++) {
        long current_rnk;
        
        while(polong >= 0 && alice[j] > score[polong]) polong--;

        if(polong == -1) current_rnk = 1;
        else if(alice[j] == score[polong]) current_rnk = rnk[polong];
        else if(alice[j] < score[polong]) current_rnk = rnk[polong] + 1;

        cout<<current_rnk<<endl;
    }

    return 0;
}























