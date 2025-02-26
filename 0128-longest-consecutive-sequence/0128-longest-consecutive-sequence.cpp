class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ans = 1;
        int n =nums.size();
        int cnt = 1;
        if(n == 0) return 0;

        for(int i=0; i<n-1; i++){
            if(nums[i+1] - nums[i] == 1) cnt++;
            else if(nums[i+1] == nums[i]) continue;
            else{
                cnt = 1;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};