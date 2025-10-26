class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int cnt = 0;
        for(int i=1; i<=n; i++){
            int temp = i%7;
            if(temp == 0){
                ans = ans + 7 + cnt;
                cnt++;
            }
            else ans = ans + temp + cnt;
        }
        return ans;
    }
};