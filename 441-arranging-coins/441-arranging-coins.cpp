class Solution {
public:
    int arrangeCoins(int n) {
        int index = 1;
       while(n > 0) n -= index++; 
        if(n == 0)return index - 1;
        return index - 2;
    }
};