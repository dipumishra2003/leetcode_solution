class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        int max_pari = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){
            if(nums[i]+nums[i+1]>nums[i+2]){
                int pari = nums[i]+nums[i+1]+nums[i+2];
                max_pari = max(max_pari, pari);
            }
        }

        return max_pari;
    }
};