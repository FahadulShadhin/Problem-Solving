#include<bits/stdc++.h>
using namespace std;

int main() {
    int heights[26];
    for(int i=0; i<26; i++) cin>>heights[i];
    string str;
    cin>>str;

    int len = str.length();
    int height = -1;
    for(int i=0; i<len; i++) {
        if(heights[str[i] - 'a'] > height) height = heights[str[i] - 'a'];
    }
    int area = len * height;
    cout<<area<<endl;

    return 0;
}