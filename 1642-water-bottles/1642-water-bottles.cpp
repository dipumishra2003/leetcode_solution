class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange){
            int n = numBottles%numExchange;
            numBottles = (numBottles/numExchange);
            ans = numBottles + ans;
            numBottles = numBottles + n;
        }
        return ans;
    }
};