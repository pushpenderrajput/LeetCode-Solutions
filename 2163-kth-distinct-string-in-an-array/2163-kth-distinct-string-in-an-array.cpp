class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mpp;
        vector<string> store;
        for(auto it:arr){
            mpp[it]++;
        }
        for(auto it:arr){
            if(mpp[it] == 1){
                store.push_back(it);
            }
        }
        if(store.size()<k){
            return "";
        }
        return store[k-1];
        
    }
};