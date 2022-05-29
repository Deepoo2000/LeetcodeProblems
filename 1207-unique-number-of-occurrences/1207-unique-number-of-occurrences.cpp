class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>st;
        map<int,int>mp;
        for(int i = 0; i< arr.size();i++)mp[arr[i]]++;
        for(auto it:mp)st.insert(it.second);
        if(st.size()==mp.size())return true;
        return false;
    }
};