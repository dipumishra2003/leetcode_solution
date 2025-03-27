class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int mx=-1;
        int m;

        for(auto &num : nums){
            mp[num]++;
            if(mp[num] > mx){
                m = num;
                mx = mp[num];
            }
        }

        int cnt = 0;
        int split;

        for(int i=0; i<n; i++){
            if(nums[i] == m){
                cnt++;
            }
            if(cnt > (i+1)/2){
                split = i;
                break;
            }
        }
        cnt=0;
        int i;

        for(i=split+1; i<n; i++){
            if(nums[i] == m){
                cnt++;
            }
        }
        if(cnt > (i-split-1)/2){
            return split;
        }

        return -1;

    }
};