class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<vector<int>> res;
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++) mp[nums1[i][0]] = nums1[i][1];
        for(int j=0; j<m; j++){
            if( mp[nums2[j][0]] ) mp[nums2[j][0]] += nums2[j][1];
            else mp[nums2[j][0]] = nums2[j][1];
        }

        for(auto it : mp){
            res.push_back({it.first, it.second});
        }

        sort(res.begin(), res.end());

        return res;

    }
};