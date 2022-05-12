class Solution {
public:
    bool check(int n){
        if(n==4)return true;
        check(n/4);
        return false;
    }
    bool isPowerOfFour(int n) {
        for(int i=0;i<=16;i++){
            if(pow(4,i)==n)return true;
        }
        return false;
    }
};