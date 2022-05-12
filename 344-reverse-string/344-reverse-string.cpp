class Solution {
public:
    void reverse(int index, vector<char>& s){
        if(index>=s.size()/2)return;
        reverse(index+1,s);
        char ch = s[index];
        s[index]=s[s.size()-1-index];
        s[s.size()-1-index] =ch;
        
    }
    void reverseString(vector<char>& s) {
     reverse(0,s);
    }
};