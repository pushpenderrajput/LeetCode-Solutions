class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore Voting Algorithm
        int candidate = 0;
        int votes = 0;
        for(auto num:nums){
            if(votes == 0){
                candidate = num;
            }
            votes += (candidate == num) ? 1 : -1;
        }
        return candidate;
    }
};