#include<bits/stdc++.h>
#define d double
using namespace std;
 
d bisection_m(d ab, d ac, d bc, d ratio);
d calculate_ratio(d ab, d ac, d bc, d ad);
 
int main() {
    //freopen("input.txt", "r", stdin);
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t;
    cin>>t;
 
    for(int i=1; i<=t; i++){
        d ab, ac, bc, ratio;
        cin>>ab>>ac>>bc>>ratio;
 
        d x = bisection_m(ab, ac, bc, ratio);
 
        cout<<"Case "<<i<<": "<<setprecision(10)<<x<<endl;
    }
 
    return 0;
}
 
d calculate_ratio(d ab, d ac, d bc, d ad) {
    d x = (ad / ab);
    d ae = x * ac;
    d de = x * bc;
 
    d ss = (ad + de + ae) / 2.0;
    d sl = (ab + bc + ac) / 2.0;
 
    d smallTreangleArea = sqrt(ss * (ss-ad) * (ss-de) * (ss-ae));
    d largeTriangleArea = sqrt(sl * (sl-ab) * (sl-bc) * (sl-ac));
 
    d trapheziumArea = largeTriangleArea - smallTreangleArea;
 
    d ratio = smallTreangleArea / trapheziumArea;
 
    return ratio;
}
 
d bisection_m(d ab, d ac, d bc, d ratio) {
    d ad;
    d low = 0.0;
    d high = ab;
 
    while((high - low) > 0.0000000001){
        d mid = (low + high) / 2;
        ad = mid;
 
        if(calculate_ratio(ab, ac, bc, ad) > ratio) high = mid;
        else low = mid;
    }
 
    return ad;
}