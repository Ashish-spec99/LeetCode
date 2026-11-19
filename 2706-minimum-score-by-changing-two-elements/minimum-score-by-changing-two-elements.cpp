class Solution {
public:
    int minimizeSum(vector<int>& nums) {

        int n = nums.size();

        if (n <= 3) {
            return 0;
        }
        sort(nums.begin(), nums.end());

        int diff1 = nums[n - 1] - nums[2]; 
        int diff2 = nums[n - 3] - nums[0]; 
        int diff3 = nums[n - 2] - nums[1]; 

        int ans = diff1;
        if (diff2 < ans) {
            ans = diff2;
        }
        if (diff3 < ans) {
            ans = diff3;
        }
        return ans;
    }
};