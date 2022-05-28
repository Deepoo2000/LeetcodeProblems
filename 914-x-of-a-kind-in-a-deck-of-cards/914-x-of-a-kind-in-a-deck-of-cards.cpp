class Solution {
public:
    int gcd(int a, int b) { return((b == 0) ? a : gcd(b, a % b)); }
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;
        int count = 0;
        for(int i = 0; i < deck.size(); i++){
            mp[deck[i]]++;
        }
        for(auto it:mp){
            count = gcd(count, it.second);
        }
        return count >= 2;
    }
};