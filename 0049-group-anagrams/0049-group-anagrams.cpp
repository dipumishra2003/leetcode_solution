#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;

        for (const string& str : strs) {
            string sortedStr = str; 
            sort(sortedStr.begin(), sortedStr.end());
            anagramMap[sortedStr].push_back(str); 
        }

        vector<vector<string>> res;
        for (const auto& pair : anagramMap) {
            res.push_back(pair.second);
        }

        return res;
    }
};