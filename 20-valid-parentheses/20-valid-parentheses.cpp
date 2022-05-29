class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int count=0;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')st.push(s[i]),count++;
            else {
                if(!st.empty()){
                    if(s[i] == ')' && st.top() == '(')st.pop(),count++;
                    else if(s[i] == ']' && st.top() == '[')st.pop(),count++;
                    else if(s[i] == '}' && st.top() == '{')st.pop(),count++;
                }
            }
        }
        if(st.empty()&&count==s.size())return true;
        return false;
    }
};