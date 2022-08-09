class Solution {
    public boolean check(int n){
        while(n > 0){
            if(n % 10 == 0)return false;
            n /= 10;
        }
        return true;
    }
    public int[] getNoZeroIntegers(int n) {
        int[] arr = new int[2];
        int index = 1;
        while(n > 0){
            int f = 0, l = 0;
            int ans = n - index;
            if(check(ans) && check(index)){
                arr[0] = index;
                arr[1] = ans;
                return arr;
            }
            index++;
        }
        return arr;
    }
}