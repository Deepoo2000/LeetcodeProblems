class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i= 0;i<words.size();i++){
            ans=words[i];
            reverse(ans.begin(),ans.end());
            if(ans==words[i]){
                return ans;
            }
        }
        return ("");
    }
};