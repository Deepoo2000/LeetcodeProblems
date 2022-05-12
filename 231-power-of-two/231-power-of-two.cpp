class Solution {
public:
    bool flag = true;
    void power(int n){
      if(n<1)return;
        power(n/2);
        if(n%2!=0&&n!=1)flag=false;
    }
    bool isPowerOfTwo(int n) {
        if(n==1)return true;
        if(n<1)return false;
        power(n);
        return flag;
    }
};