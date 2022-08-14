class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;
        for(int i = 0; i < prices.size(); i++){
            int dis = prices[i];
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[i] >= prices[j]){
                    dis = (prices[i] - prices[j]);
                    break;
                }
            }
            v.push_back(dis);
        }
        return v;
    }
};