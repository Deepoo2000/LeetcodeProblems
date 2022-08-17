class Solution {
public:
    int getSum(int a, int b) {
       int v[2]={a,b};
        return accumulate(v,v+2,0);
    }
};