class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int white = 0;
        int blue = nums.size()-1;
        while(white<=blue){
            if(nums[white] == 0){
                swap(nums[red],nums[white]);
                    red++;white++;
                
            }
            else if(nums[white] == 1){
                white++;
            }
            else if(nums[white]==2){
                swap(nums[blue],nums[white]);
                blue--;

            }
        }
        
    }
};