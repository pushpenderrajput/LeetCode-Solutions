class Solution {
public:
    void findComb(int index, int target, vector<int>& ds, vector<int>& arr, vector<vector<int>>& ans) {
        if(index == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        //Pick Element
        if(arr[index] <= target){
            ds.push_back(arr[index]);
            findComb(index+1,target-arr[index],ds,arr,ans);
            ds.pop_back();
        } 
        // not Pick
        while (index + 1 < arr.size() && arr[index] == arr[index + 1]) {
            index++;
        }
        findComb(index+1,target,ds,arr,ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        
        sort(candidates.begin(), candidates.end());
        
        
        findComb(0, target, ds, candidates, ans);
        
        return ans;
    }
};
