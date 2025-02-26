class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            maxi = max(maxi, sum);
            if (sum < 0) sum = 0;
        }
        sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            mini = min(mini, sum);
            if (sum > 0) sum = 0;
        }
        return max(maxi, abs(mini));
    }
};