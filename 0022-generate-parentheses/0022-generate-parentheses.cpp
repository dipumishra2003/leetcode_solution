class Solution {
public:

    void para(int n, vector<string>& ans, string& temp, int left, int right){
        if(left==n && right==n){
            ans.push_back(temp);
            return;
        }

        if(left<n){
            temp.push_back('(');
            para(n,ans,temp,left+1,right);
            temp.pop_back();
        }
        if(left>right){
            temp.push_back(')');
            para(n,ans,temp,left,right+1);
            temp.pop_back();
        }

    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp = "";
        para(n, ans, temp, 0, 0);
        return ans;
    }
};