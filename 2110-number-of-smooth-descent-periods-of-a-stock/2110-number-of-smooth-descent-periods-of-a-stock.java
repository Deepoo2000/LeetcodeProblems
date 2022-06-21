class Solution {
    public long getDescentPeriods(int[] prices) {
        long  ans = 0;
        long count = 1;
        for(int i = 0; i < prices.length -  1; i++){
            if(prices[i] - prices[i + 1] == 1)count++;
            else {
                if(count > 1)ans +=count * (count - 1)/2;
                count = 1;
            }
        }
        if(count > 1)ans +=count * (count - 1)/2;
        ans += prices.length;
        return ans;
    }
}