class Solution {
public:
    int trailingZeroes(int n) {
        int num = n;
        long long count1 = 0;
        long long count2 = 0;
        while(num)num /= 2, count1 += num;
        num = n;
        while(num)num /= 5, count2 += num;
        return min(count1, count2);
    }
};