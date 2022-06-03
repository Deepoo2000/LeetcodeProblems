class Solution {
public:
    int titleToNumber(string columnTitle) {
        //int ans = ((columnTitle[0] - 'a') * 25) + (columnTitle[1] - 'a' + 1);
        //if ((columnTitle[1] - 'a') > columnTitle[0] - 'a')ans--;
        //return ans;
        int ans = 0;
        for(int i = 0; i < columnTitle.size(); i++){
            ans = (ans * 26) + (columnTitle[i] - 64);
        }
        return ans;
    }
};