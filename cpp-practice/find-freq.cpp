// https://practice.geeksforgeeks.org/problems/find-the-frequency/1 

#include<iostream>
#include<vector>
using namespace std;

int findFreq(vector<int> arr, int x) {
    int fcount = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == x) {
            fcount += 1;
        }
    }
    return fcount;
}

int main() {
    int n, x; 
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    cin >> x;


    cout << findFreq(arr, x) << '\n';
    return 0;
}