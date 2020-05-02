#include <bits/stdc++.h>
using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    int cnt_numbers = 0, cnt_lower_case = 0, cnt_upper_case = 0, cnt_special_characters = 0, cnt = 0;

    int i = 0;
    while(i < password.size()) {
        for(int j=0; j<numbers.size(); j++) {
            if(password[i] == numbers[j]) 
                cnt_numbers++;
        }

        for(int j=0; j<lower_case.size(); j++) {
            if(password[i] == lower_case[j])
                cnt_lower_case++;
        }

        for(int j=0; j<upper_case.size(); j++) {
            if(password[i] == upper_case[j])
                cnt_upper_case++;
        }

        for(int j=0; j<special_characters.size(); j++) {
            if(password[i] == special_characters[j])
                cnt_special_characters++;
        }

        i++;
    }

    if(cnt_numbers == 0) cnt++;
    if(cnt_lower_case == 0) cnt++;
    if(cnt_upper_case == 0) cnt++;
    if(cnt_special_characters == 0) cnt++;

    int s = password.size() + cnt;
    
    if(s < 6) return  cnt + (6-s);
    else return cnt;

}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
