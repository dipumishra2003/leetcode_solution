class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int res = 0;
        int mul = 1;
        while(n){
            int rem = n % 2;
            rem = rem^1;
            res =  res + rem*mul;
            mul = mul*2;
            n = n/2;
        }
    
        return res;
    }
};