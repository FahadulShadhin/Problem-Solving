// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

#include<iostream>
#include<utility>
#define ll long long
using namespace std;

pair<ll, ll> minMax(ll arr[], int n) {
    ll min = arr[0], max = arr[0];

    if(n == 1) {
        min = arr[0];
        max = arr[0];
    }
    else {
        for(int i=1; i<n; i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
            else if(arr[i] > max) {
                max = arr[i];
            }
        }
    }
    
    return {min, max};
}


int main() {
    int n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    pair<ll, ll> result;
    result = minMax(arr, n);
    cout << result.first << " " << result.second << '\n';
    return 0;
}