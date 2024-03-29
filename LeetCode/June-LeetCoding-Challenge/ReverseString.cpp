class Solution {
public:
    void reverseString(vector<char>& s) {
    
        // reverse(s.begin(), s.end());
    
        int left = 0, right = s.size()-1;
        char temp;
        
        while(left < right) {
            temp = s[left];
            s[left++] = s[right];
            s[right--] = temp;
        }
    }
};
