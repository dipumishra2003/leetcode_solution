class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt = 0;
        int n = s.length();
        int l = 0;
        unordered_map<char, int> mp;

        for(int r=0; r<n; r++){
            mp[s[r]]++;
            while(mp['a'] && mp['b'] && mp['c']){
                cnt += n-r;
                mp[s[l]]--;
                l++;
            }
        }
        return cnt;
    }
};