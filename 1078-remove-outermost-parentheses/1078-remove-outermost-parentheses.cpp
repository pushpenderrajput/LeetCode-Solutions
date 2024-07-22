class Solution {
public:
    

string removeOuterParentheses(string s) {
    string ans;
    int level = 0;
    
    for (char c : s) {
        if (c == '(') {
            if (level > 0) {
                ans.push_back(c);
            }
            level++;
        } else if (c == ')') {
            level--;
            if (level > 0) {
                ans.push_back(c);
            }
        }
    }
    
    return ans;
}

};