class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>>ans;
        if(strs.size() == 1) {
            ans.push_back(strs);
            return ans;
        }
        vector<pair<string, int>>p;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            p.push_back({ s, i });
        }
        sort(p.begin(), p.end());
        vector<string>v;
        for (int i = 0; i < p.size() - 1; i++) {
            if (p[i].first == p[i + 1].first) {
                v.push_back(strs[p[i].second]);
            }
            else {
                v.push_back(strs[p[i].second]);
                ans.push_back(v);
                v.clear();
            }
        }
        if(p[p.size() - 2].first == p[p.size() - 1].first){
            v.push_back(strs[p[p.size() - 1].second]);
        }
        else if(p[p.size() - 2].first != p[p.size() - 1].first){
                v.push_back(strs[p[p.size() - 1].second]);
                //v.clear();
        }
        ans.push_back(v);
        return ans;
    }
};