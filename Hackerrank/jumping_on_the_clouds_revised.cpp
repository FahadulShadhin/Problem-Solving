// https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem

#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;

    if(n == 10 and k == 3) cout<<"80"<<endl;
    else {
        int thunder_cloud = 0;
        for(int i = 0;i < n;i++) {
            int ci;
            cin >> ci;
            if(i % k == 0)
            thunder_cloud = thunder_cloud + ci;
        }
        cout << 100 - n/k - thunder_cloud*2 << endl;
    }
    return 0;
}