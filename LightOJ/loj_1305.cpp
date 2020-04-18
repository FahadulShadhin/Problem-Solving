#include<bits/stdc++.h>
#define LL long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
 
    int t;
    LL ax, ay, bx, by, cx, cy, dx, dy;
    LL area1, area2, area;
    cin>>t;
     
    for(int i=1; i<=t; i++) {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
       
        dx = (ax + cx) - bx;
        dy = (ay + cy) - by;
        area1 = ax*by + bx*cy + cx*dy + dx*ay;
        area2 = ay*bx + by*cx + cy*dx + dy*ax;
        area = abs(area1 - area2) / 2;
        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<area<<endl;
    }
 
    return 0;
}