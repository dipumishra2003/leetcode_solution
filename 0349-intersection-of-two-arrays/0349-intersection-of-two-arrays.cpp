class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        set<int> s;
        int i=0;
        int j=0;
        while(i<n1 && j<n2){
            if(nums1[i] == nums2[j]){
                s.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        vector<int> ans;
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};