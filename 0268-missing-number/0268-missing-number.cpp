class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int missing;
        int n = nums.size();
        int num1 = n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return num1 - sum;
        
        
    }
};