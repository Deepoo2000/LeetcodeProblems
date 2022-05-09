class Solution {
public:
    bool check(int r, int l, string s){
        while(r <= l){
            if(s[r]!=s[l])return false;
            r++;
            l--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int r =0;
        int l = s.size() - 1;
        while(r <= l){
            if(s[r]!=s[l])break;
            r++;
            l--;
        }
        return check(r + 1, l, s)||check(r, l - 1, s);
        
    }
};