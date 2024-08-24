class Solution {
public:
    bool Possible(vector<int>& nums, int threshold, int mid){
        int dividor = 0;
        for(int num: nums){

            dividor = dividor + ceil((double)num / mid);

        }
        return dividor <= threshold;
    } 
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start  = 1;
        int end = *max_element(nums.begin(),nums.end());
        int div = -1;
        while(start <= end){
            int mid = (start+end)/2;
            if(Possible(nums, threshold, mid)){
                div = mid;
                end = mid-1;
            }
            else start = mid+1;
            
        }
        return div;
    }
};