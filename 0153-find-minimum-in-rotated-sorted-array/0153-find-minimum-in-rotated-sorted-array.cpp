class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        int ans;

        if(nums[0]<nums[nums.size()-1] || nums.size() == 1) return nums[0];

        while(start<=end){
            int mid = start + (end-start)/2;

            if(nums[mid]>=nums[0]) start = mid+1;
            else if(nums[mid]<nums[0]){
                ans = mid;
                end = mid-1;
            }
        }
        return nums[ans];
    }
};