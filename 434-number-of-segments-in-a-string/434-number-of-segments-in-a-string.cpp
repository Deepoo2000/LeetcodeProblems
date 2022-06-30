class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
        if(s[i]!=' ')count++;
            else {
                if(count)ans++,count = 0;
            }
        }
        if(count)ans++;
        return ans;
    }
};