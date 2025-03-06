class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int s = n*n;
        int sum = 0 ;
        vector<int> mp(s+1,0);
        int rep ;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int num = grid[i][j];
                mp[num]++;
                sum = sum + num;
                if(mp[num] > 1) rep = num;
            }
        }

        int actual_sum = ((s*(s+1))/2);
        int missing = actual_sum - (sum - rep);

        return {rep, missing};
    }
};