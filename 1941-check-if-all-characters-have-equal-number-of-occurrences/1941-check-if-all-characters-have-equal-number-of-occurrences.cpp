class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] ={0};
        for(int i =0; i< s.size(); i++){
            freq[s[i] - 'a']++;
        }
        set<int>st;
        for(int i =0;i<26;i++){
            if(freq[i])st.insert(freq[i]);
        }
        return st.size()==1;
    }
};