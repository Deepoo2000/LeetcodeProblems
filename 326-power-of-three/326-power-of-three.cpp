class Solution {
public:
    bool flag=true;
    void check(int n){
        if(n<1)return;
        check(n/3);
        if(n%3!=0&&n!=1)flag=false;

    }
    bool isPowerOfThree(int n) {
        if(n==1)return true;
        if(n<1)return false;
        check(n);
        return flag;
    }
};