class Solution {
    public:
        int maxProfit(vector<int>& prices) {
                int minPrice = INT_MAX;
                        int maxP = 0;
                                for (int price : prices) {
                                            if (price < minPrice) minPrice = price;
                                                        maxP = max(price - minPrice, maxP);
                                                                }
                                                                        return maxP;
                                                                            }
                                                                            };
                                                                            
