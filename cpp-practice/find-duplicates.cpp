// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

#include<iostream>
#include<vector>
using namespace std;

vector<int> duplicates(int arr[], int n) {
    int sol[n];
    for(int i=0; i<n; i++) {
        sol[i] = 0;
    }
    for(int i=0; i<n; i++) {
        sol[arr[i]]++;
    }
    vector<int> solv;
    for(int i=0; i<n; i++) {
        if(sol[i] > 1) solv.push_back(i); 
    }
    if(solv.size() == 0) return {-1};
    return solv;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<int> ans = duplicates(arr, n);
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}