class Solution {
public:
    void subSet(int i, int k, int n, vector<int> ds , vector<vector<int>>& ans){
        if(k == 0 && n == 0){
            ans.push_back(ds);
            return;
        
        }
        if(i>9) return;
        ds.push_back(i);
        subSet(i+1,k-1,n-i,ds,ans);
        ds.pop_back();
        subSet(i+1,k,n,ds,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        subSet(1,k,n,ds,ans);
        return ans;
        
    }
};