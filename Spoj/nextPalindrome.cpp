// spoj: The next palindrome

#include<bits/stdc++.h>
using namespace std;

int allNines(string str, int n)
{
    for(int i=0; i<n; i++){
        if(str[i] != '9') return 0;
    }
    return 1;
}

void nextPalindrome(string str, int n)
{
    int i = n / 2;
    int j = i;

    if(n % 2 == 0) i = i-1;

    while(i >= 0 and str[i] == str[j]){
        i--;
        j++;
    }

    if(i < 0 or str[i] < str[j]){
        i = n / 2;
        j = i;

        if(n % 2 == 0) i = i-1;

        int carry = 1;
        while(i >= 0){
            int num = ((str[i] - '0') + carry);
            carry = num / 10;
            str[i] = (num % 10) + '0';
            str[j] = str[i];
            i--;
            j++;
        }
    }
    else{
        while(i >= 0){
            str[j] = str[i];
            i--;
            j++;
        }
    }

    cout << str << endl;
}

int main()
{
    int test;
    cin>>test;

    while(test--){
        string str;
        cin>>str;
        int n = str.length();

        //if( n == 1 ) cout << (str[0] - '0') + 1 << endl;
        if(allNines(str, n) == 1){
            cout<<"1";
            for(int i=1; i<n; i++) cout<<"0";
            cout<<"1\n";
        }
        else nextPalindrome(str, n);
    }

    return 0;
}