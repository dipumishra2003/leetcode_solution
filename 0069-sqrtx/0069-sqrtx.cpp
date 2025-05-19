class Solution {
public:
    int mySqrt(int x) {
        int l=0;
        int r=x;
        long long ans;
        while(l<=r){
            long long mid = (l+r)/2;
            if(x == mid*mid ){
                ans = mid;
                break;
            }
            else if(mid*mid>x){
                r=mid-1;
            }
            else{
                ans=mid;
                l=mid+1;
            } 
        }
        return ans;
    }
};