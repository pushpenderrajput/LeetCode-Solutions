class Solution {
public:
    void subSet(int ind, vector<int>& nums, vector<vector<int>>& ans,vector<int>ds,int N){
        ans.push_back(ds);
        for(int i = ind; i<N;i++){
            if(i!=ind && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            subSet(i+1,nums,ans,ds,N);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int N = nums.size();
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        subSet(0,nums,ans,ds,N);
        return ans;
        

        
    }
};