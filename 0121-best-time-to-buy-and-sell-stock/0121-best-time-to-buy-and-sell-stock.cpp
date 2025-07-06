class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum_price = prices[0];
        int max_profit = 0;
        for(int i=1; i<prices.size(); i++)
        {
            minimum_price = min(minimum_price, prices[i]);
            max_profit = max(max_profit, prices[i] - minimum_price);
        }
        return max_profit;
    }
};