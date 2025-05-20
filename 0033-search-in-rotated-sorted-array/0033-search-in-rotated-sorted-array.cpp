class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n-1;

        while(start<=end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]>=nums[0]){
                if(target<nums[mid] && target>=nums[start]) end = mid-1;
                else start = mid+1;
                
            }
            else{
                if(target>nums[mid] && target<=nums[end]) start = mid+1;
                else end = mid-1;
            }
        }

        return -1;
    }
};