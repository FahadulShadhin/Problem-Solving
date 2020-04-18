#include<bits/stdc++.h>
#define D double
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int t;
  scanf("%d", &t);
  for(int i=1; i<=t; i++){
    D a, b;
    scanf("%lf : %lf",&a, &b);
 
    D ac = sqrt(a*a + b*b);                        // cout<<ac<<endl;
    D r = ac / 2.0;                                // cout<<r<<endl;
    D theta = acos((r*r + r*r - b*b) / (2.0*r*r)); // cout<<theta<<endl;
    D s = r*theta;                                 // cout<<s<<endl;
    D x = 400.0 / (2.0*s + 2.0*a);                 // cout<<x<<endl;
    D ans1 = a*x;
    D ans2 = b*x;
 
    printf("Case %d: %.10lf %.10lf\n",i, ans1, ans2);
  }
 
  return 0;
}