class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int count = 0;
        vector<int>v;
        int frqs[26] = {0};
        for(int i = 0; i < s.size(); i++){
            if(s[i] == goal[i])count++;
            else v.push_back(i);
            frqs[s[i] - 'a']++;
        }
        if(v.size() > 2)return false;
        if(v.size() == 2){
            swap(s[v[0]], s[v[1]]);
             if(s == goal)return true;
        }
        if(s == goal){
        for(int i = 0; i <26; i++){
            if(frqs[i] >= 2)return true;
        }
        }
        return false;
        
    }
};