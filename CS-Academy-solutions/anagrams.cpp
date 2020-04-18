#include<bits/stdc++.h>
#define LL long long
using namespace std;

/*
int main() {
    freopen("input.txt", "r", stdin);
    int n;
    LL ara[100001], freq[100001], k = 0;
    string s;
    cin >> n;
    while(n--) {
        LL sum = 0;
        cin >> s;
        for(LL i=0; i<s.size(); i++) 
            sum += (int) s[i];
        ara[k++] = sum;
    }

    for(LL i=0; i<k; i++) 
        freq[ara[i]]++;

    LL max = freq[ara[0]];
    for(LL i=1; i<k; i++)
        if(freq[ara[i]] > max) 
            max = freq[ara[i]];

    cout << max << endl;
    return 0;
}
*/
/*
int main() {
    freopen("input.txt", "r", stdin);
    int n;
    string s;
    vector<string> str;
    cin >> n;
    while(n--) {
        cin >> s;
        sort(s.begin(), s.end());
        str.push_back(s);
    }
    //for(int i=0; i<str.size(); i++)  cout << str[i] << "\n\n";
    sort(str.begin(), str.end());
    //for(int i=0; i<str.size(); i++)  cout << str[i] << "\n";
    int cnt, max = 0;
    for(int i=0; i<str.size(); i++){
        cnt = 0;
        for(int j=0; j<str.size(); j++) {
            if(str[i] == str[j])
                cnt++;
        }
        if(cnt>max) max = cnt;
    }
    cout << max << endl;
    return 0;
}
*/
int main() {
    //freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    string s;
    vector<string> str;

    while(n--) {
        cin >> s;
        str.push_back(s);
    }

    int cnt = 0;
    map<vector<int>, int> mp;
    for(auto& word: str) {
        vector<int> freq(26);
        for(char c: word) freq[c - 'a']++;
        mp[freq]++;
        cnt = max(cnt, mp[freq]);
    }
    cout << cnt << endl;
    return 0;
}

