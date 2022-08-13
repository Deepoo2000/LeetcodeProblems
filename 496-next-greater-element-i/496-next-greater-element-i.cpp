class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for (int i = 0; i < nums1.size(); i++) {
            bool flag = false;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums2[j] == nums1[i]) {
                    j++;
                    for (; j < nums2.size(); j++) {
                        if (nums2[j] > nums1[i]) {
                            flag = true;
                            v.push_back(nums2[j]);
                            break;
                        }
                    }
                }
            }
            if (!flag)v.push_back(-1);
        }
        return v;
    }
 };