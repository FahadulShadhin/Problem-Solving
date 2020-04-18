#include<bits/stdc++.h>
using namespace std;

int reverse(int num){
    int reversed = 0;
    while (num){
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main()
{
    int test, n, m;
    scanf("%d", &test);
    while(test--){
        scanf("%d %d", &n, &m);
        int ans = reverse(reverse(n) + reverse(m));
        printf("%d\n", ans);
    }
    return 0;
}