// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1 

#include<iostream>
#include<set>
using namespace std;

int missingNumber(int arr[], int n) {
    int sum1=0, sum2=0;
    for(int i=0; i<n; i++) {
        sum1 += i+1;
    }
    for(int i=0; i<n-1; i++) {
        sum2 += arr[i];
    }
    return sum1 - sum2;
}

int main() {
    int n;
    cin >> n;
    int arr[n-1];
    for(int i=0; i<n-1; i++) {
        cin >> arr[i];
    }
    cout << missingNumber(arr, n) << "\n";
    return 0;
}