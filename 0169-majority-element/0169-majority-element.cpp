class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int votes = 1;
        int majority = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(votes == 0){
                majority = nums[i];
                votes++;
            }
            else if(nums[i] == majority){
                votes++;
            }
            else{votes--;}
        }
        return majority;
       
        
        
    }
};