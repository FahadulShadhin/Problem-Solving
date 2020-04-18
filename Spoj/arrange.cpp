// spoj: ARRANGE - Arranging Amplifiers
// #sorting

#include<bits/stdc++.h>
using namespace std;

#define MX 100000
int ara[MX];

int partition(int ara[], int start, int end)
{
    int pivot = ara[start];
    int pIndex = start + 1;

    for(int i=start+1; i<=end; i++){
        if(ara[i] > pivot){
            swap(ara[i], ara[pIndex]);
            pIndex++;
        }
    }
    swap(ara[start], ara[pIndex - 1]);

    return (pIndex-1);
}

void sortArray(int ara[], int start, int end)
{
    if(start < end){
        int partitionIndx = partition(ara, start, end);
        sortArray(ara, start, partitionIndx-1);
        sortArray(ara, partitionIndx+1, end);
    }
}

int main()
{
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        int num, k = 0, cnt1 = 0, cnt = 0;

        scanf("%d", &n);
        for(int i=0; i<n; i++){
            scanf("%d", &num);

            if(num == 1) cnt1++;
            else{
                ara[k++] = num;
                cnt++;
            }
        }

        sortArray(ara, 0, cnt-1);
        //for(int i=0; i<n; i++) printf("%d ", ara[i]); printf("\n");

        for(int i=0; i<cnt1; i++) printf("1 ");

        if(cnt == 2 && ara[0] == 3 && ara[1] == 2) printf("2 3\n");
        else{
            for(int i=0; i<cnt; i++) printf("%d ", ara[i]); printf("\n");
        }
    }

    return 0;
}
