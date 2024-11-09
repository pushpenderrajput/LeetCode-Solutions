class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int N = nums.size();
        vector<int> nge(N,-1);
        stack<int> st;
        for(int i = N*2-1; i>= 0; i--){
            while(!st.empty() && st.top() <= nums[i%N]){
                st.pop();
            }
            if(i<N){
                nge[i] = st.empty()? -1 : st.top();
            }
            st.push(nums[i%N]);
        }
        return nge;
        
    }
};