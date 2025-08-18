class Solution {
public:

    void per(vector<int>& nums, vector<vector<int>>& res, int index) {
        if (index == nums.size()) {
            res.push_back(nums);
            return;
        }
        vector<bool> used(21,0);
        for (int i = index; i < nums.size(); i++) {
            if(used[nums[i]+10] == 0){
                swap(nums[i],nums[index]);
                per(nums,res,index+1);
                swap(nums[i],nums[index]);
                used[nums[i]+10] = 1;
            }
            
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        per(nums, res, 0);
        return res;
    }
};