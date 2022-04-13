// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1 

#include<iostream>
#include<string>
#include<stack>
using namespace std;

string reverseWords(string S) {
    stack<string> st;
    
    string word = "";
    for(int i=0; i<S.size(); i++) {
        if(S[i] == '.') {
            st.push(word);
            word = "";
        }
        else {
            word = word + S[i];
        }
    }
    st.push(word);

    // while(!v.empty()) {
    //     string x = v.top();
    //     v.pop();
    //     cout << x << " ";
    // }cout << "\n";

    string res = "";
    while(!st.empty()) {
        string x = st.top();
        res = res + x;
        res = res + '.';
        st.pop();
    }
    res.erase(res.begin() + res.size()-1);

    return res;
}

int main() {
    string S;
    cin >> S;

    cout << reverseWords(S) << "\n";

    return 0;
}
