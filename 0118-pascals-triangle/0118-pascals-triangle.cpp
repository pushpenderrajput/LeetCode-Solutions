class Solution {
public:
    vector<int>generateRow(int rowNum){
        long long ans =1;
        vector<int> row;
        row.push_back(1);
        for(int col = 1; col<rowNum; col++){
            ans = ans*(rowNum-col);
            ans = ans/col;
            row.push_back(ans);

        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        for(int i =1;i<=numRows;i++){
            pascal.push_back(generateRow(i));
        }
        return pascal;

        
        
    }
};