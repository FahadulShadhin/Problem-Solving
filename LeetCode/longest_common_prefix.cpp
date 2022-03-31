// https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string comp = strs[0];
        for(int i=1; i<strs.size(); i++) {
            string temp = "";
            for(int j=0; j<strs[i].size(); j++) {
                if(comp[j] == strs[i][j]) {
                    temp += strs[i][j];
                } 
                else{
                    break;
                }
            }
            comp = temp;
        }
        return comp;
    }
};