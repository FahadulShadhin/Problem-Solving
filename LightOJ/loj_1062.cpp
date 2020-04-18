#include<bits/stdc++.h>
#define D double
#define EPS 0.00000001
using namespace std;
 
D guessHeight(D x, D y, D m) {
    D A = sqrt(x*x - m*m);
    D B = sqrt(y*y - m*m);
    D height = (A+B) / (A*B);
    return height;
}
 
D bisection(D x, D y, D c) {
    D low = 0.0;
    D high = min(x, y);
    D mid;
    while(high-low > EPS){
        mid = (low+high) / 2.0;
        D aw = 1.0 / c;
        if(guessHeight(x, y, mid) > aw) high = mid;
        else low = mid;
    }
    return mid;
}
 
int main() {
    //freopen("input.txt", "r", stdin);
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++) {
        D x, y, c;
        D ans;
        cin>>x>>y>>c;
        ans = bisection(x, y, c);
 
        cout<<"Case "<<i<<": "<<setprecision(10)<<ans<<endl;
    }
 
    return 0;
}