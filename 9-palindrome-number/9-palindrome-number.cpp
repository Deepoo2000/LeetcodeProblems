class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x !=0 && x%10==0)
        {
            return false;
        }
        //reverse process
      long long  int reversed=0;
        int original=x;
        while(x!=0)
        {
            int r;
            r= x%10;
            reversed=reversed*10 +r;
            x=x/10;
        }
        ///kdmjf
        return reversed==original;
    }
};