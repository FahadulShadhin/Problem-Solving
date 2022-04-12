// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// O(n^2) --> TLE 
// int getPairsCount(vector<int> arr, int n, int k) {
//     int cnt = 0;
//     for(int i=0; i<n-1; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(arr[i] + arr[j] == k) {
//                 cnt+=1;
//             }
//         }
//     }
//     return cnt;
// }


// O(n) 
int getPairsCount(vector<int> arr, int n, int k) {
    unordered_map<int, int>m;
    int cnt = 0;
    for(int i=0; i<n; i++) {
        if(m[k-arr[i]]) {
            cnt += m[k-arr[i]];
        }
        m[arr[i]]++;
    }

    return cnt;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << getPairsCount(arr, n, k) << "\n";

    return 0;
}