class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        for(int i=0; i<freq.size(); i++){
            if(freq[i] % 2 != 0) return false;
        }

        return true;
    }
};