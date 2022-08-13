class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        vector<int> maxAyRight(n,0);
        int curMax = prices[n-1];
        
        for(int i=n-2; i>=0; i--)
        {
            maxAtRight[i]=curMax;
            curMax = max(curMax, prices[i]);
        }
        int profit = 0;
        
        for(int i=0; i<n-1; i++)
        {
            int curProfit = maxAtRight[i] - prices[i];
            if(curProfit>profit)
            {profit = curProfit;}
        }
        
        return profit;
        
    }
};
