class Solution {
public:
    int minimumMoves(string s) {
        int index = 0, count = 0;
        for (int i = 0; i < s.size() - 2; i++) {
            if(s[i]=='X'){
            for (int j = i; j <= i + 2; j++) {
                if (s[j] == 'X') {
                    count++;
                    s[j] = 'O';
                }
            }
            if (count) {
                index++,count=0;
            }
            }

        }
        if(s[s.size()-1]=='X'||s[s.size()-2]=='X')index++;
        return index;
    }
};