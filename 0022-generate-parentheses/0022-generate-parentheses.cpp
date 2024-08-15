class Solution {
public:
    void helper(string curr, int open, int close, int n, vector<string>& ans){
        if(close == n && open == n){
            ans.push_back(curr);
            return;
        }
        if(open<n){
            helper(curr+"(", open+1, close, n , ans);
        }
        if(open > close){
            helper(curr+")", open, close+1, n, ans);

        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper("",0,0,n,ans);
        return ans;
        
    }
};