class Solution {
public:
    void findCombination(int index, int target, vector<int>& ds, vector<int>& arr, vector<vector<int>>& ans){
        if(index == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[index]<= target){
            ds.push_back(arr[index]);
            findCombination(index,target-arr[index], ds, arr, ans);
            ds.pop_back();
        }
        findCombination(index+1,target,ds,arr,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0,target,ds,candidates,ans);
        return ans;
        
    }
};