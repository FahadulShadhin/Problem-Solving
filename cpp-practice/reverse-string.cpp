// https://practice.geeksforgeeks.org/problems/reverse-a-string/1 

#include<iostream>
#include<string>
using namespace std;

string reverseString(string str) {
    string reverse = "";

    if(str.length() == 1) return str;

    for(int i=str.length()-1; i>=0; i--) {
        reverse = reverse + str[i];
    }
    return reverse;
}

int main() {
    string str;
    cin >> str;
    cout << reverseString(str) << '\n';
    return 0;
}