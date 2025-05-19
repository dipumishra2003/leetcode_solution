class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1, last = -1;
        int start = 0, end = n-1;

        // For first
        while(start<=end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                first = mid;
                end = mid-1;
            }
            else if(nums[mid]>target) end = mid-1;
            else start = mid+1;
        }

        // For last
        start = 0, end = n-1;
        while(start<=end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                last = mid;
                start = mid+1;
            }
            else if(nums[mid]>target) end = mid-1;
            else start = mid+1;
        }

        return {first, last};
    }
};