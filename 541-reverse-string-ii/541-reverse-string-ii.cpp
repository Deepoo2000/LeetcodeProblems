class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size() <= k){
            reverse(s.begin(), s.end());
            return s;
        }
        for(int i = 0; i < s.size(); i += 2*k ){
         if(s.size() - i - 1 < k){
             reverse(s.begin() + i, s.end());
         }
            else {
          reverse(s.begin() + i, s.begin() + k + i);
            }
        }
        return s;
    }
};