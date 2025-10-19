class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto c:s){
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
            else if (c == ')' || c == ']' || c == '}') {
                if (st.empty()) return false; // no matching opening
                char topChar = st.top();
                if ((topChar == '(' && c == ')') ||
                    (topChar == '[' && c == ']') ||
                    (topChar == '{' && c == '}')) {
                    st.pop();
                } 
                else return false;
            } 
            else return false;
        }
        return st.empty();
    }
};