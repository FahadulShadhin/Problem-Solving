class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int n = nums.size();
        int L[n], R[n];
        
        L[0] = 1;
        for(int i=1; i<n; i++) 
            L[i] = L[i-1] * nums[i-1];
        
        R[n-1] = 1;
        for(int i=n-2; i>=0; i--) 
            R[i] = R[i+1] * nums[i+1];
    
        //for(int i=0; i<n; i++) cout << L[i] << " "; cout << endl;
        //for(int i=0; i<n; i++) cout << R[i] << " "; cout << endl;
        
        for(int i=0; i<n; i++) 
            output.push_back(L[i] * R[i]);
        
        return output;
    }
};
