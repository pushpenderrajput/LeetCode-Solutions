class Solution {
private:
    int searchFirst(vector<int>& nums, int target, int high, int low){
        int first = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                first = mid;
                high = mid-1;

            }
            else if(nums[mid]<target){
                low = mid+1;

            }
            else high = mid-1;
            
            
        }
        return first;
    }
    int searchLast(vector<int>& nums, int target, int high, int low){
        int last = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                last = mid;
                low = mid+1;

            }
            else if(nums[mid]<target){
                low = mid+1;

            }
            else high = mid-1;
            
            
        }
        return last;

    }


   

public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size()-1;
        int mid = low + (high-low)/2;
        vector<int> ans;
        int firstOcc = searchFirst(nums,target,high, low);
        int lastOcc = searchLast(nums, target, high, low);
        ans.push_back(firstOcc);
        ans.push_back(lastOcc);
        return ans;
        
        
    }
};