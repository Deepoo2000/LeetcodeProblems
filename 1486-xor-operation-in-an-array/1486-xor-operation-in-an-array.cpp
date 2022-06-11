class Solution {
public:
    int xorOperation(int n, int start) {
        int ans =0;
        int num[1000];
        for(int i = 0; i < n; i++){
            ans = ans ^ start;
            start += 2;
        }
        return ans;
    }
};