class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int index = 0;
        if(t.size() != s.size())return 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == t[i])index++;
        }
        if(index == t.size()) return 1;
        return 0;
    }
};