class Solution {
public:
    int countSubstrings(string s) {
        int ans= 0;
        for(int i  = 0; i < s.size(); i++){
            string x= "";
            for(int j = i; j < s.size(); j++){
               x += s[j];
                string k = x;
                reverse(k.begin(), k.end());
                if(k == x)ans++;
            }
        }
        return ans;
    }
};