#include<iostream>
#include<vector>
#define ll long long
using namespace std;

// O(n^2) 
// vector<int> subarraySum(int arr[], int n, ll s) {
//     int sum = 0;
//     vector<int> indxs;
//     for(int i=0; i<n; i++) {
//         sum = arr[i];
//         for(int j=i+1; j<n; j++) {
//             sum += arr[j];

//             if(sum == s) {
//                 indxs.push_back(i+1);
//                 indxs.push_back(j+1);
//                 return indxs;
//             }

//             if(sum > s || j==n) break;
//         }
//     }
//     return {-1};
// }


// O(n) --> sliding window approach
vector<int> subarraySum(int arr[], int n, ll s) {
    int i=0, j=0, sum=0;

    while(1) {
        if(sum < s) {
            sum += arr[i];
            i+=1;
        }
        if(sum > s) {
            sum -= arr[j];
            j+=1;
        }
        if(sum == s) return {j+1, i};
        if(i > n) return {-1};
    }
}

int main() {
    int n;
    ll s;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cin >> s;
    
    vector<int> sol = subarraySum(arr, n, s);
    for(int i=0; i<sol.size(); i++) {
        cout << sol[i] << " ";
    } cout << "\n";

    return 0;
}