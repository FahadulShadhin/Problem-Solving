class Solution {
private:
    bool all_nine(vector<int> digits, int n) {
        for(int i=0; i<n; i++) {
            if(digits[i] != 9) 
                return false;
        }
        return true;
    }

    int continious_nine(vector<int> digits, int n) {
        int ans;
        for(int i=n-1; i>=0; i--) {
            if(digits[i] != 9) { 
                ans = i;
                break;
            }
        }
        return ans;
    }
    
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        if(all_nine(digits, n)) {
            digits[0] = 1;
            for(int i=1; i<n; i++) digits[i] = 0;
            digits.push_back(0);
        }
        else if(continious_nine(digits, n) == n-1) {
            digits[n-1] += 1;
        }
        else if(continious_nine(digits, n) < n-1) {
            int indx = continious_nine(digits, n);
            digits[indx] += 1;
            for(int i=indx+1; i<n; i++) 
                digits[i] = 0;
        }
            
        return digits;
    }
};