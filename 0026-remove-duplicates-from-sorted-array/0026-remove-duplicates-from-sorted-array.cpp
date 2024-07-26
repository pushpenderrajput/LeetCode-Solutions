class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> a;
        for(int i = 0;i<nums.size();i++){
            a.insert(nums[i]);
        }
        int index = 0;
        for(auto it:a){
            
            nums[index] = it;
            index++;

        }
        return index;
        

        
    }
};