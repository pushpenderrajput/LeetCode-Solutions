class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int N = nums.size();
        vector<int> nge(N,-1);
        for(int i = 0; i<N; i++){
            for(int j = i+1; j < i+N; j++){
                int ind = j % N;
                if(nums[ind] > nums[i]){
                    nge[i] = nums[ind];
                    break;
                }
            }
        }
        return nge;
        
    }
};