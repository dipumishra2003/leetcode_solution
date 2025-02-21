class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n = x;
        long long num = 0;
        while(x != 0){
            
            num = x % 10 + num*10;
            x = x / 10;  
        }
        if(n == num){
            return true;
        }
        else{
            return false;
        }
    }
};