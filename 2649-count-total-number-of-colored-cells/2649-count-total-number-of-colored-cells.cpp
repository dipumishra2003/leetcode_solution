class Solution {
public:
    long long coloredCells(int n) {
        long long a = (long long)n*n;
        long long b = (long long)(n-1)*(n-1);
        long long res = a + b;
        return res;
    }
};