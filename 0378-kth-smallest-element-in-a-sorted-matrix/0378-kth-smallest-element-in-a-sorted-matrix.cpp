class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> res;
        int n = matrix.size();
        for(int i=0; i<n;i++){
            for(int j=0; j<n; j++){
                res.push_back(matrix[i][j]);
            }
        }
        sort(res.begin(), res.end());
        return res[k-1];
    }
};