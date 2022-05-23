class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
       if(word1.size()>=word2.size()){
           for(int i=0;i<word1.size();i++){
               s+=word1[i];
               if(word2.size()>i)s+=word2[i];
           }
       } 
       if(word2.size()>word1.size()){
           int i= 0;
           for(;i<word1.size();i++){
               s+=word1[i];
               s+=word2[i];
           }
           for(;i<word2.size();i++)s+=word2[i];
       }
        return s;
    }
};