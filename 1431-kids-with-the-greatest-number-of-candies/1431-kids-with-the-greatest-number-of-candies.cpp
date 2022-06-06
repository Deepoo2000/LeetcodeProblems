class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = -1;
        for(int i = 0; i < candies.size(); i++)mx = max(candies[i], mx);
        vector<bool>v;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= mx)v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};