class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int n = s.size();
        int cnt_shift = 0;
        for(int i=0; i<shift.size(); i++) {
                if(shift[i][0] == 0) cnt_shift += shift[i][1];
                else cnt_shift -= shift[i][1];
        }
        cnt_shift = cnt_shift % n;
        
        if(cnt_shift > 0) {
            //leftshift 
            //cout << cnt_shift << endl;
            return s.substr(cnt_shift, n-cnt_shift) + s.substr(0, cnt_shift);
        }
        else {
            // rightshift
            //cnt_shift = abs(cnt_shift);
            cout << cnt_shift << endl;
            return s.substr(n-cnt_shift, cnt_shift) + s.substr(0, n-cnt_shift);
        }
    }
};
