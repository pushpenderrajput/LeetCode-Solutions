class Solution {
public:
    void sortColors(vector<int>& nums) {
        int white = 0;
        int red = 0;
        int blue = nums.size()-1;
        while(white<=blue){
            if(nums[white] == 2){
                swap(nums[white],nums[blue]);
                blue--;

            }
            else if(nums[white] == 0){
                swap(nums[white],nums[red]);
                red++;
                white++;
            }
            else if(nums[white] == 1){
                white++;
            }
        }        

        
    }
};