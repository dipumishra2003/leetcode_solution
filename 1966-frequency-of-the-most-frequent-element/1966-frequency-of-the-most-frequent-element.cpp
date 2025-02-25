class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int ans = 1;
        long n = nums.size();
        sort(nums.begin(), nums.end());

        vector<long> prefix;
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            prefix.push_back(sum);
        }

        for(int i=n-1; i>=0; i--){
            int l = 0, r = i;
            int res;
            while(l<=r){
                int mid = l+(r-l)/2;
                long long no = (long long)nums[i] * (i - mid + 1) - (prefix[i] -  prefix[mid] + nums[mid]);

                if(no > k){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                    res=mid;
                }
            }
            ans = max(ans,i-res+1);
        }
        return ans;
    }
};