class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        while(columnNumber--){
        s += (columnNumber % 26 + 'A');
            columnNumber /= 26;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};