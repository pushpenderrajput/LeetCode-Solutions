class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int elm1 = INT_MIN;
        int elm2 = INT_MIN;
        for(auto num:nums){
            if(cnt1 == 0 && num != elm2){
                cnt1 = 1;
                elm1 = num;
            }
            else if(cnt2 == 0 && num != elm1){
                cnt2 = 1;
                elm2 = num;
            }
            else if(elm1 == num ) cnt1++;
            
            else if(elm2 == num ) cnt2++;
            else cnt1--,cnt2--;
        }
        vector<int> ans;
        cnt1 = 0, cnt2 = 0;
        for(auto num:nums){
            if(num == elm1) cnt1++;
            else if(num == elm2) cnt2++;
        }
        int n = nums.size();
        int mini = int(n/3)+1;
        if(cnt1 >= mini) ans.push_back(elm1);
        if(cnt2 >= mini) ans.push_back(elm2);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};