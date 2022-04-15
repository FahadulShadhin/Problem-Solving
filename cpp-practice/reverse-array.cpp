#include<iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int left = 0, right = n-1;
    while(left <= right) {
        int temp = arr[left];
        arr[left++] = arr[right];
        arr[right--] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}