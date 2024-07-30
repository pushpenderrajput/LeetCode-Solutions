class Solution {
    vector<int> generateRow(int Row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1; col<Row;col++){
            ans = ans*(Row-col);
            ans = ans/(col);
            ansRow.push_back(ans);
        } 
        return ansRow;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
        
    }
};