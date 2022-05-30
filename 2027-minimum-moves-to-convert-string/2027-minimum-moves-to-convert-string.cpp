class Solution {
public:
    int minimumMoves(string s) {
        int i = 0, count = 0;
        int n = s.size();
        while (i < n) {
            if (s[i] == 'X') {
                count++;
                i += 3;
            }
            else i++;
        }
        return count;
    }
};