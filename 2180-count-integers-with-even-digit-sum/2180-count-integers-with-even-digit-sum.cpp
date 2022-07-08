class Solution {
public:
    int countEven(int num) {
       if(num <= 9)return num / 2;
        int n = num;
        int sum = 0;
        while(n > 0) sum += (n % 10), n /= 10;
        if(sum % 2 ==0 )return num/2;
        return (num - 1)/2;
    }
};