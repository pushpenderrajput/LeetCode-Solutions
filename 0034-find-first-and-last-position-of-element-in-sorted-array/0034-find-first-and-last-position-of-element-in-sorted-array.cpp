class Solution {
public:
    int searchFirst(vector<int>& nums, int target){
        int s = 0, e = nums.size() - 1;
        int first = -1; 
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                first = mid;  
                e = mid - 1;  
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return first;
    }

    int searchLast(vector<int>& nums, int target){
        int s = 0, e = nums.size() - 1;
        int last = -1; 
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                last = mid; 
                s = mid + 1; 
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {searchFirst(nums, target), searchLast(nums, target)};
    }
};
