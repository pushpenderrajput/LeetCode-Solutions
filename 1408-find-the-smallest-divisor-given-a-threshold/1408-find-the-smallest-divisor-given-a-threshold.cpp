class Solution {
public:
bool ispossible(vector<int>& nums, int threshold, int div){
     int sum = 0;
     for(auto i:nums){
        sum +=ceil(i/(double)div);

     }
     return sum <= threshold;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l =1, r= *max_element(nums.begin(),nums.end()) , ans = 0;
        while(l<=r){
            int mid = l+((r-l)/2);
            if(ispossible(nums,threshold,mid)){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};