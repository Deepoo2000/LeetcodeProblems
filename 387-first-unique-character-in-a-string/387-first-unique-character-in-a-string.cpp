class Solution {
public:
    int firstUniqChar(string s) {
    map<char, vector<int>>mp;
    int index = 0;
    for (int i = 0 ; i < s.size(); i++) {
        mp[s[i]].push_back(i);
    }
        int mn = 1000010;
    for (auto it : mp) {
        if (it.second.size() == 1)mn=min(mn, it.second[0]);
    }
    if(mn!=1000010)return mn;
    return -1;
}

};