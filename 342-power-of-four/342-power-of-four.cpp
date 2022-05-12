class Solution {
public:
    bool flag=true;
    void check(int n){
        if(n<1)return;
        check(n/4);
        if(n%4!=0&&n!=1)flag=false;

    }
    bool isPowerOfFour(long n) {
        if(n==1)return true;
        if(n<1)return false;
        check(n);
        return flag;
    }
};