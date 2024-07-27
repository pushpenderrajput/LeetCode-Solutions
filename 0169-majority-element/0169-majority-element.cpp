class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majority = nums[0];
        int votes = 1;
        for(int i = 1;i<n;i++){
            if(votes == 0){
                votes++;
                majority = nums[i];
            }
            else if(nums[i] == majority) votes++;
            else votes--;
        }
        return majority;
        
        
    }
};