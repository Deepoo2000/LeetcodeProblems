class Solution {
public:
    int xorOperation(int n, int start) {
        int ans =0;
        int num[1000];
        for(int i = 0; i < n; i++)num[i] = start + (2*i);
         for(int i = 0; i < n; i++)ans = ans ^ num[i];
        return ans;
    }
};