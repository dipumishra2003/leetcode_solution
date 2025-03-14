class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();

        int maxC = *max_element(candies.begin(), candies.end());
        int l = 1;
        int r = maxC;
        int res = 0;

        while(l<=r){
            int mid = (l+r)/2;
            long long m = k;
            for(int i=0; i<n; i++){
                if(m >= candies[i]/mid) m -= candies[i]/mid;
                else m=0;
            }
            if(m == 0) {
                res = mid;
                l = mid+1;
            }
            else{
                r = mid - 1;
            }
        }

        return res;
    }
};