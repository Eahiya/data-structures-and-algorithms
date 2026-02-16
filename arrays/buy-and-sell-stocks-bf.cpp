# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

class Solution{
    
    public:

    int buyAndSellStocks(vector<int> &prices){
        int n = prices.size();

        if(prices.size() < 2){
            return 0;
        }

        int minPriceSoFar = INT_MAX;
        int maxProfit = 0;

        for(int i=0;i<n;i++){

            if(prices[i] < minPriceSoFar){
                minPriceSoFar = prices[i];
            }
            int potentialProfit = prices[i] - minPriceSoFar;

            maxProfit = max(maxProfit, potentialProfit);
        }
        return maxProfit;
    }
};