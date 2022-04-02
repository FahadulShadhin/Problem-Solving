// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

#include<iostream>
#include<set>
using namespace std;

int doUnion(int a[], int n, int b[], int m) {
    set<int> uni;
    for(int i=0; i<n; i++) {
        uni.insert(a[i]);
    }
    for(int i=0; i<m; i++) {
        uni.insert(b[i]);
    }

    // set<int>:: iterator it;
    // for(it=uni.begin(); it!=uni.end(); it++) {
    //     cout << *it << " ";
    // }cout << "\n";

    return uni.size();
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];

    for(int i=0; i<n; i++) {
        cin >> arr1[i];
    }
    for(int i=0; i<m; i++) {
        cin >> arr2[i];
    }

    int ans = doUnion(arr1, n, arr2, m);
    cout << ans << "\n";

    return 0;
}