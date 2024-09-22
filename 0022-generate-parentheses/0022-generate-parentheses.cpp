class Solution {
public:
    vector<string> helper(string  curr, int open, int close, int n, vector<string> & ans){
        if(close == n && open == n){
            ans.push_back(curr);
            return ans;
        }
        if(open < n){
            helper(curr+"(", open+1, close, n, ans);
        }
        if(close < open){
            helper(curr+")", open, close+1, n, ans);
        }
        return ans;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        return helper("",0,0,n,ans);
       
        
    }
};