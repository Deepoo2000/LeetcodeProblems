class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
       vector<string>v;
        for(int i = 0; i < words.size(); i++){
            string s = words[i], ans = "";
            sort(s.begin(), s.end());
            for(int j = i + 1; j < words.size(); j++){
                string x = words[j];
                sort(x.begin(), x.end());
                if(x == s && words[j] != "1") {
                    ans = words[i];
                    words[j] = "1";
                }
                else {
                    break;
                }
            }
            if(words[i] != "1")
               v.push_back(words[i]);
            //else v.push_back()
        }
        return v;
    }
};