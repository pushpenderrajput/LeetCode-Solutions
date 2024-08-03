class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(arr.size() != target.size()){
            return false;
        }
        vector<int> count(1001);
        for(int i = 0; i< arr.size();i++){
            count[target[i]]++;
            count[arr[i]]--;
        }
        for(auto c: count){
            if(c != 0){
                return false;
            }
        }
        return true;

        
    }
};