class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int red = 0;
        // int blue = nums.size()-1;
        // int white = red+1;
        // while(white <= blue){
        //     if(nums[white] == 2){
        //         swap(nums[white],nums[blue]);
        //         blue--;
        //         white++;

        //     }
        //     else if(nums[white] == 0){
        //         swap(nums[red],nums[white]);
        //             red++;
                    
                
        //     }
        //     else if(red == white){white++;}
        //     else if(nums[white] == 1){
        //         white++;
        //     }
        // }
        for(int i = 0; i<nums.size();i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]>=nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }

        
    }
};