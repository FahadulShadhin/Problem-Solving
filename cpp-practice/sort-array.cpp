// https://practice.geeksforgeeks.org/problems/sort-the-array0055/1 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> sortArr(vector<int> arr, int n) {
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<int> result = sortArr(arr, n);
    for(int i=0; i<n; i++) {
        cout << result[i] << " ";
    } cout << '\n';

    return 0;
}