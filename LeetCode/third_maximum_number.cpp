class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max = nums[0];
        long long scnd_max = LONG_MIN;
        long long trd_max = LONG_MIN;
        
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] == max or nums[i] == scnd_max or nums[i] == trd_max) continue;
            
            if(nums[i] > max) {
                trd_max = scnd_max;
                scnd_max = max;
                max = nums[i];
            } else if(nums[i] < scnd_max and nums[i] > trd_max) {
                trd_max = nums[i];
            } else if(nums[i] > scnd_max and nums[i] < max) {
                trd_max = scnd_max;
                scnd_max = nums[i];
            }
        }
        //cout << LONG_MIN << endl;
        return (trd_max == LONG_MIN) ? max : trd_max;
    }
};