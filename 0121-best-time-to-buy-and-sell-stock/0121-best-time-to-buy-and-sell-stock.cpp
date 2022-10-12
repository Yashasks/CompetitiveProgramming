class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=-1;
        int minimum=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minimum=min(minimum, prices[i]);
            profit=max(profit, prices[i]-minimum);
        }
        if(profit<0)return 0;
        return profit;
    }
};