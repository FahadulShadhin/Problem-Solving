/*
Algorithm
1. Scan the infix expression from left to right.
2. If the scanned character is an operand, output it.
3. Else,
…..3.1 If the precedence of the scanned operator is greater than the precedence of the operator 
       in the stack(or the stack is empty or the stack contains a ‘(‘ ), push it.
…..3.2 Else, Pop all the operators from the stack which are greater than or equal to in precedence than that of the scanned operator. 
       After doing that Push the scanned operator to the stack. (If you encounter parenthesis while popping then stop there and push 
       the scanned operator in the stack.)
4. If the scanned character is an ‘(‘, push it to the stack.
5. If the scanned character is an ‘)’, pop the stack and and output it until a ‘(‘ is encountered, and discard both the parenthesis.
6. Repeat steps 2-6 until infix expression is scanned.
7. Print the output
8. Pop and output from the stack until it is not empty.
*/

#include<bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if(c == '^') return 3;
    else if(c == '*' or c == '/') return 2;
    else if(c == '+' or c == '-') return 1;
    else return -1;
}

void infix_to_postfix(string s)
{
    stack<char> st;
    st.push('N');
    int n = s.length();
    string ns;

    for(int i=0; i<n; i++){
        if(s[i] >= 'a' and s[i] <= 'z' or s[i] >= 'A' and s[i] <= 'Z') ns += s[i];
        else if(s[i] == '(') st.push('(');
        else if(s[i] == ')'){
            while(st.top() != 'N' and st.top() != '('){
                char c = st.top();
                st.pop();
                ns += c;
            }
            if(st.top() == '('){
                char c = st.top();
                st.pop();
            }
        }
        else{
            while(st.top() != 'N' and precedence(s[i]) <= precedence(st.top())){
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }
    }

    while(st.top() != 'N'){
        char c = st.top();
        st.pop();
        ns += c;
    }

    cout << ns <<endl;
}

int main()
{
    //freopen("input.txt", "r", stdin);

    int test;
    cin>>test;

    while(test--){
        string s;
        cin>>s;
        infix_to_postfix(s);
    }

    return 0;
}