class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;

        for(auto num : nums){
            mp[num]++;
        }

        priority_queue<pair<int,int>> pq;

        for(auto &freq : mp){
            pq.push({freq.second, freq.first});
        }
        
        for(int i=0; i<k; i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};