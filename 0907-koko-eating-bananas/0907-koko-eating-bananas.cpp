class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        int start = 1;
        int end = piles[n-1];

        int ans; 
        
        while(start <= end){
            int mid = start + (end - start)/2;
            long long sum = 0;
            for(int j=0; j<n; j++){
                sum = sum + (piles[j] + mid - 1)/mid;
                if(sum>h) break;
            }
            if(sum<=h){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        return ans;
    }
};