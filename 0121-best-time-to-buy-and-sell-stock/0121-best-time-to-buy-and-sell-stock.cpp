class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++){
            if(profit < prices[i]-mini)profit=prices[i]-mini;
            if(prices[i]<mini)mini=prices[i];
        }
        return profit;
        
    }
};