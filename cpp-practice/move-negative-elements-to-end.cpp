// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1 

#include<iostream>
#include<vector>
using namespace std;

vector<int> segregateElements(vector<int> arr, int n) {
    vector<int> ans;

    for(int i=0; i<n; i++) {
        if(arr[i] >= 0) {
            ans.push_back(arr[i]);
        }
    }
    for(int i=0; i<n; i++) {
        if(arr[i] < 0) {
            ans.push_back(arr[i]);
        }
    }

    return ans;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        cin >> x;
        arr.push_back(x);
    }

    vector<int> ans = segregateElements(arr, n);
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}