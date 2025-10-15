class Solution {
public:
    bool check(vector<int>& nums, int i, int j){
        for(int k=i+1; k<=j; k++){
            if(nums[k] <= nums[k-1]) return false;
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0; i<=n-(2*k); i++){
            if(check(nums,i,i+k-1) && check(nums,i+k, i+k+k-1)) return true;
        }
        return false;
    }
};