class Solution {
public:
    string reverseWords(string s) {
        string x = "",ans = "";
        for(int i = 0; i <s.size(); i++){
            if(s[i]!= ' ')x+=s[i];
            else {
                reverse(x.begin(),x.end());
                ans += x;
                ans += ' ';
                x = "";
            }
        }
                        
        if(x.size() > 0){
            reverse(x.begin(),x.end());
            ans += x;
        }
        return ans;
    }
};