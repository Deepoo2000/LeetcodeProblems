class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char>v;
        for(int i = 0; i < letters.size(); i++){
            if(letters[i] > target)v.push_back(letters[i]);
        }
        if(v.size() == 0)return letters[0];
        return v[0];
    }
};