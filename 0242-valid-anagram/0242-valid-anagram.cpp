class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> mp(26,0);
        int n=s.size();
        if(n != t.size()) return false;
        for(int i=0; i<n; i++){
            mp[s[i]-'a']++;
        }
        for(int i=0; i<n; i++){
            if(!mp[t[i]-'a']) return false;
            mp[t[i]-'a']--;
        }
        return true;
    }
};