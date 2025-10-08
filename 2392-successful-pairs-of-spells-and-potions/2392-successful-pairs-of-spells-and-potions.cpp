class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> ans(n,0);
        sort(potions.begin(), potions.end());
        
        for(int i=0; i<n; i++){
            if(spells[i] == 0){
                ans[i] = 0;
                continue;
            }

            long long num = (success + spells[i] - 1)/spells[i];

            int idx = lower_bound(potions.begin(), potions.end(), num) - potions.begin();

            ans[i] = m-idx;
        }
        return ans;
    }
};