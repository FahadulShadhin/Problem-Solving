#include<iostream>
#include<cmath>
#define PI 2*acos(0.0)
#define D double
using namespace std;
 
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
 
     int T;
     D  r;
     cin >> r;
     for(int i=1; i<=T; i++) {
         cin >> r;
         D x = r*r;
         D y = 4*r*r;
         D ans = (y - (PI*x)) + 0.0000000001;
         printf("Case %d: %.2lf\n", i, ans);
     }
     return 0;
}
