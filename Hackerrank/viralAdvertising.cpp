#include<bits/stdc++.h>
using namespace std;

int main() {   
    int days;
    cin>>days;

    int shared = 5;
    int licked = 2;
    int cumulative = 2;

    for(int i=2; i<=days; i++) {
        shared = 3 * licked;
        licked = shared / 2;
        cumulative += licked;
    }
    cout<<cumulative<<endl;
    
    return 0;
}