// https://practice.geeksforgeeks.org/problems/peak-element/1#

#include<iostream>
using namespace std;

int peakElements(int arr[], int n) {
    int indx;
    if(n==1) return 0;
    if(arr[0] >= arr[1]) return 0;
    if(arr[n-1] >= arr[n-2]) indx = n-1;

    for(int i=1; i<n-1; i++) {
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
            indx = i;
            break;
        }
    }
    return indx;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << peakElements(arr, n) << '\n';
    return 0;
}