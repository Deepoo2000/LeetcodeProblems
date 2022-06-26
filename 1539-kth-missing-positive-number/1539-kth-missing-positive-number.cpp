class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int, int>mp;
        for (int i = 0; i < arr.size(); i++) mp[arr[i]]++;
        cout << mp.size() << endl;
        int count = 0;
        for (int j = 1; j <= arr.size() + k; j++) {
            if (mp.find(j) == mp.end())count++;
            if (count == k)return j;
        }     
        return 0;
    }
};