class Solution {
public:
    int DaysReq(vector<int>& weights, int mid){
        int load = 0;
        int days = 1;
        for(int weight:weights){
            if(load + weight > mid){
                load = weight;
                days++;
            }
            else{
                load += weight;
            }

        }
        return days;
        
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(),weights.end());
        int end = 0;
        int capacity = -1;
        for(int weight: weights){
            end += weight;
        }
        while(start <= end){
            int mid = (start+end)/2;
            if(DaysReq(weights, mid) <= days){
                capacity = mid;
                end = mid-1;

            }
            else{
                start = mid+1;
            }
        }
        return capacity;
        
    }
};