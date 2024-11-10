class Solution {
public:
    int trap(vector<int>& height) {
        int N = height.size();
        vector<int> prefixMax(N);
        prefixMax[0] = height[0];
        vector<int> suffixMax(N);
        suffixMax[N-1] = height[N-1];
        for(int i = 1; i<N; i++){
            prefixMax[i] = max(prefixMax[i-1],height[i]);
        }
        for(int i = N-2; i>0; i--){
            suffixMax[i] = max(suffixMax[i+1],height[i]);
        }
        int total = 0;
        for(int i = 0; i<N;i++){
            int leftMax = prefixMax[i];
            int rightMax = suffixMax[i];
            if(height[i] < leftMax && height[i] < rightMax){
                total += min(leftMax,rightMax) - height[i];
            }
        }
        return total;
        
    }
};