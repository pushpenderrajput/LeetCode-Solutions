class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> copy = arr;
        sort(copy.begin(),copy.end());
        unordered_map<int,int> ranks;
        int Rank = 1;
        for(auto num: copy){
            if(ranks.find(num) == ranks.end()){
                ranks[num] = Rank++;
            }
        }
        vector<int> result;
        for(auto num: arr){
            result.push_back(ranks[num]);
        }
        return result;
    }
    
};