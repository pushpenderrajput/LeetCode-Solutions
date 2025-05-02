class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1){
            return intervals;
        }
        vector<vector<int>> ansVect;
        sort(intervals.begin(),intervals.end());
        ansVect.push_back(intervals[0]);
        for(int i = 1; i<intervals.size();i++){
            if(ansVect.back()[1]>=intervals[i][0]){
                ansVect.back()[1] = max(ansVect.back()[1],intervals[i][1]);
            }
            else{
                ansVect.push_back(intervals[i]);
            }
        }
        return ansVect;

        
    }
};