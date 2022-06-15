class Solution {
public:
    string reverseWords(string s) {
        deque<string>dq;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ')ans += s[i];
            else  {
                if(ans !="")dq.push_front(ans),ans = "";
                //else dq.push_front("");           
            }
        }
        if(ans !="")dq.push_front(ans),ans = "";
        ans = "";
        for (int i = 0; i < dq.size() - 1; i++) {
            ans += dq[i];
            ans += ' ';
        }
        ans += dq[dq.size() - 1];
        return ans;
    }
};