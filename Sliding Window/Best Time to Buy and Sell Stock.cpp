class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0; //Our two bounds for our window
        int profit = 0;
        for(int sell = 1; sell < prices.size(); sell++){
            if(prices[sell] < prices[buy]){ //If our potential sell price is lower than our buy price we updated our buy price
                buy = sell;
            }else{
                if(prices[sell] - prices[buy] > profit) profit = prices[sell] - prices[buy]; //Otherwise find the max profit
            }
        }

        return profit;
    }
    //Complexity O(N)
};
