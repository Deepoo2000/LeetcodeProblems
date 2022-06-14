class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int>mp1, mp2;
        for (int i = 0; i < nums1.size(); i++)mp1[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++)mp2[nums2[i]]++;
        vector<int>v;
        set<int>st;
        for (int i = 0; i < nums1.size(); i++) {
            if (mp2.find(nums1[i]) != mp2.end()) {
                if (mp1[nums1[i]] <= mp2[nums1[i]]) {
                    int n = nums1[i];
                    while (mp2[nums1[i]] > 0)mp2[nums1[i]]--;
                    while (mp1[nums1[i]] > 0)v.push_back(n), mp1[nums1[i]]--;
                }
                else {
                    int n = nums1[i];
                    while (mp1[nums1[i]] > 0)mp1[nums1[i]]--;
                    while (mp2[nums1[i]] > 0)v.push_back(n), mp2[nums1[i]]--;
                }
            }
        }
        return v;
    }
};