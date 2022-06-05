class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int freq[26] = { 0 };
        int ans = 0;
        for (int i = 0; i < allowed.size(); i++)freq[allowed[i] - 'a']++;
        for (int i = 0; i < words.size(); i++) {
            int count = 0;
            for (int j = 0; j < words[i].size(); j++) {
                if (freq[words[i][j] - 'a'])count++;
                else break;
            }
            if (count == words[i].size())ans++;
        }
        return ans;
    }
};