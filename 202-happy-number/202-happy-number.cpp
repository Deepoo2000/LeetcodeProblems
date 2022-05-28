class Solution {
public:
    bool isHappy(int n) {
        int ans = 0;
        int test = 100;
        while(test--){
            while(n > 0){
                ans += (n % 10) * (n % 10);
                n /= 10;
            }
            n = ans;
            ans = 0;
            if(n == 1)return true;
        }
        return false;
    }
};