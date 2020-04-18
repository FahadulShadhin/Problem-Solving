// spoj: VENOM - Touch of Venom

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        int initail_health, poison, health_value;
        scanf("%d %d %d", &initail_health, &poison, &health_value);

        if(initail_health <= poison) printf("1\n");
        else{
            int cnt = 0;
            int i = 1;
            while(1){
                initail_health = initail_health - i*poison;
                cnt++; 
                if(initail_health <= 0) break;

                initail_health = initail_health + health_value;
                cnt++;
                if(initail_health <= 0) break;
                i++;
            }
            printf("%d\n", cnt);
        }
    }

    return 0;
}


// O(1) solution
/*
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,p,a;
        scanf("%d%d%d",&h,&p,&a);
        if(h<=p)
        {
            printf("1\n");
            continue;
        }
        double y,z,d;
        LL result=0;
        y= p - 2*a;
        z= 2*(a-h);
        d= sqrt(y*y - 4*p*z);
        result = ceil((-1*y + d)/(2*p));
        result = result + (result-1);
        printf("%lld\n",result);
    }
    return 0;
}
*/