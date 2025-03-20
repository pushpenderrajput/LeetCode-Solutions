class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        if(n==0) return nums;
        if(n==1){
            ans.push_back(nums[0]);
            return ans;
        }
        sort(nums.begin(),nums.end());
        vector<int> currentInterval = nums[0];
        for(int i = 1; i<n; i++){
            if(currentInterval[1] >= nums[i][0]){
                currentInterval[1] = max(currentInterval[1],nums[i][1]);
            }else{
                ans.push_back(currentInterval);
                currentInterval = nums[i];
            }
            
        }
        ans.push_back(currentInterval);
        return ans;

    }
};