class Solution {
public:
    // int hIndex(vector<int>& citations) {
    //     int n = citations.size();
    //     for(int i=0; i<n; i++) {
    //         if(citations[i] >= (n-i)) 
    //             return n-i;
    //     }
    //     return 0;
    // }
    
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int l = 0, h = n-1, ans = 0;
        
        if(n==1 and citations[0] != 0) return n;
        if(n==1 and citations[0] == 0) return 0;
        
        while(l <= h) {
            int mid = (l+h)/2;
            if(citations[mid] >= n-mid) {
                h = mid-1;
                ans = n-mid;
            }
            else 
                l = mid+1;
        }
        return ans;
    }
};
