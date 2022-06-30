class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int ans = 0;
        string s = word;
        while(sequence.find(s) != -1){
            ans++;
            s += word;
        }
        return ans;
    }
};