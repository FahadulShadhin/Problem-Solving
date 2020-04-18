// spoj: ABCDEF

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; scanf("%d", &n);
    int ara[101];
    for(int i=0; i<n; i++) scanf("%d", &ara[i]);

    vector<int> v1, v2;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                v1.push_back(ara[i]*ara[j]+ara[k]);
            }
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            for (int k=0;k<n;k++) {
                if (ara[k]==0) continue;
                v2.push_back((ara[i]+ara[j])*ara[k]);
            }
        }
    }  

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    int ans = 0;
    for (int i=0; i<v1.size(); i++)
    {
        int lo = lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin(); 
        int hi = upper_bound(v2.begin(), v2.end(), v1[i]) - v2.begin(); 

        ans += (hi-lo); 
    }

    printf("%d\n", ans);

    return 0;


}