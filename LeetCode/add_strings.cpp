class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string ans = "";
        
        int i=num1.size()-1, j=num2.size()-1;
        while(i>=0 or j>=0) {
            int x = i>=0 ? num1[i] - '0' : 0;
            int y = j>=0 ? num2[j] - '0' : 0;
            int sum = x+y+carry;
            carry = sum / 10;
            
            ans.push_back( (char)sum%10 + '0' );
            
            i--;
            j--;
        }
        if(carry != 0) 
            ans.push_back(  (char)carry + '0');
        
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};