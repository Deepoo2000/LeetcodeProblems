class Solution {
public:
    int arrangeCoins(int n) {
        long long l = 1, r = n;
        int ans = 0;
        while(l <= r){
            long long md = (l + r) / 2;
            long long sum = md * (md + 1) / 2;
            if(sum <= n){
                ans = md;
                l = md + 1;
            }
            else {
                r = md - 1;
            }
        }
        return ans;
    }
};