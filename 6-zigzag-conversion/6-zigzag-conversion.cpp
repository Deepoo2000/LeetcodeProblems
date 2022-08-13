class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 0 || numRows == 1) return s;
        string ans = "";
        // the First Row
        for (int i = 0; i < s.size(); i += (numRows - 1) * 2)ans += s[i],s[i] = '*';
        //cout << s << endl;
        if(numRows == 2) {
                // Last Row
                for(int k = 0;k < s.size(); k++){
                    if(s[k] != '*')ans += s[k];
                }
                return ans;
            }
        numRows--;
        int index = 1;
        int j = 2;
        while (true) {
            int i = index;
            bool flag = true;
            while (i < s.size()) {
                ans += s[i];
                if(ans.size() == s.size()) return ans;
                s[i] = '*';
                if (flag) i += (numRows - 1) * 2, flag = false;
                else {
                    i += j;
                    flag = true;
                }
            }
            //cout << s << endl;
            if(numRows == 2) {
                // Last Row
                for(int k = 0;k < s.size(); k++){
                    if(s[k] != '*')ans += s[k];
                }
                return ans;
            }
            if (ans.size() == s.size())return ans;
            j += 2;
            numRows--;
            index++;
        }
        return ans;
    }
};