class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int profit = 0;
        int buy = prices[0];
        for(int i = 1; i<prices.size();i++){
            profit = prices[i] - buy;
            maxProfit = max(profit,maxProfit);
            buy = min(prices[i],buy);
        }
        return maxProfit;
        
    }
};