// https://leetcode.com/problems/longest-substring-without-repeating-characters/

// O(n^3) TLE 
// class Solution {
// public:    
//     int lengthOfLongestSubstring(string s){
//         int ans = 0;
//         for(int i=0; i<s.length(); i++) {
//             for(int j=i; j<s.length(); j++) {
//                 if(checkDuplicate(s, i, j)) 
//                     ans = max(ans, j-i+1);
//             }
//         }
//         return ans;
//     }
    
//     bool checkDuplicate(string s, int i, int j) {
//         vector<int> c(128);
//         for(int k=i; k<=j; k++) {
//             char x = s[k];
//             c[x]++;
//             if(c[x] > 1) return false;
//         }
//         return true;
//     }
// };