class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        int cnt;
        vector<int> res;

        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }

        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                res.push_back(nums[i]);
            }
        }

        while(res.size() < n){
            res.push_back(0);
        }

        return res;
    }
};