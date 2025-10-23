class Solution {
public:
    int hammingWeight(int n) {
        int ans=0;
        if(n==0) return 0;
        while(n){
            ans += n%2;
            n=n/2;
        }
        return ans;
    }
};