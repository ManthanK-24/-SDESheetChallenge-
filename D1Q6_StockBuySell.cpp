class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        
        int left = 0, right = 1, n = prices.size();
        int curpro = 0, mxpro=0;
        while(right<n)
        {
            curpro = prices[right] - prices[left];
            if(prices[left]<prices[right])
            {
                mxpro = max(mxpro,curpro);
                
            }
            else
            {
                left=right;
            }
            right++;
        }
        return mxpro;
        
    }
};