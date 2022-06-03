class Solution {
public:
    int titleToNumber(string columnTitle) {
        //int ans = ((columnTitle[0] - 'a') * 25) + (columnTitle[1] - 'a' + 1);
        //if ((columnTitle[1] - 'a') > columnTitle[0] - 'a')ans--;
        //return ans;
        int ans = 0;
        for(int i = 0; i < columnTitle.size(); i++){
            int s = (columnTitle[i] - 'A') + 1;
            ans = (ans * 26) + s;
        }
        return ans;
    }
};