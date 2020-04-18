#include<bits/stdc++.h>
using namespace std;

int minMaxSubarray(int n, int ara[]) {
    int i = 0, j = 0;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    for(; i<n; i++, j++) {
        if(ara[i] > maxVal) maxVal = ara[i];
        if(ara[j] < minVal) minVal = ara[j];
    }
    
    int result = INT_MAX;
    int minIndx = -200000000, maxIndx = -100000000;
    for(int i=0; i<n; i++) {
        if(ara[i] == maxVal) maxIndx = i;
        if(ara[i] == minVal) minIndx = i;
        
        result = min(result, abs(maxIndx-minIndx)+1);
    }
    if(maxVal == minVal) return 1;
    else return result;
}

int main() {
    int n, ara[5001]; 
    cin >> n;
    for(int i=0; i<n; i++) cin >> ara[i];
    
    cout << minMaxSubarray(n, ara) << endl;
    
    return 0;
}
