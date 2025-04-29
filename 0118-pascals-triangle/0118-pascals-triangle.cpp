class Solution {
public:
    vector<int> pascal(int num){
        vector<int> ansRow;
        long long ans = 1;
        ansRow.push_back(1);
        for(int i =1; i<num; i++){
            ans = ans * (num-i);
            ans = ans/i;
            ansRow.push_back(ans);
           
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ansArr;
        for(int i = 1; i<=numRows; i++){
            
            ansArr.push_back(pascal(i));

        }
        return ansArr;
        
    }
};