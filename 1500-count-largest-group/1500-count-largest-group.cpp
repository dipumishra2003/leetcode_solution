class Solution {
public:
    int sumDigits(int n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        int res;
        unordered_map<int,int> map;
        if(n<10) return n;
        else{
            for(int i=1; i<=n; i++){
                int sum = sumDigits(i);
                map[sum]++;
            }
        }
        int max = 0;
        int count = 0;

        for (const auto& pair : map) {
            if (pair.second > max) {
                max = pair.second;
                count = 1;
            } else if (pair.second == max) {
                count++;
            }
        }
        res=count;

        return res;
    }
};