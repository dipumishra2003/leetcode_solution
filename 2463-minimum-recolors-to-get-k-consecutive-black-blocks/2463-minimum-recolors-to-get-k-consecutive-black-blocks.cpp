class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        vector<int> counts(n,0);
        int ans = INT_MAX;

        if(blocks[0] == 'W') counts[0] = 1;
        else counts[0] = 0;

        for(int i=1; i<n; i++){
            if(blocks[i] == 'W'){
                counts[i] = counts[i-1] + 1;
            }
            else counts[i] = counts[i-1];
        }

        for(int i=0; i<=n-k; i++){
            if(blocks[i] == 'W') ans = min(ans, (counts[i+k-1] - counts[i] + 1));
            else ans = min(ans, (counts[i+k-1] - counts[i]));
        }

        return ans;
    }
};