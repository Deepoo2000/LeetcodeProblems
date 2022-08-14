class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;
        for(int i = 0; i < prices.size(); i++){
            bool f = false;
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[i] >= prices[j]){
                    v.push_back(prices[i] - prices[j]);
                    f = true;
                    break;
                }
            }
            if(!f)v.push_back(prices[i]);
        }
        return v;
    }
};