class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxx = nums[0];
        for(int i = 0; i<nums.size();i++){
            if(sum<0){
                sum = 0;

            }
            sum += nums[i];
            maxx = max(sum,maxx);
        }
        return maxx;
        
    }
};