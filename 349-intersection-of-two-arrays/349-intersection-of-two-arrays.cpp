class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int>st,ans;
        for(int i=0;i<nums1.size();i++)st.insert(nums1[i]);
        nums1.clear();
        for(int i=0;i<nums2.size();i++){
            if(st.find(nums2[i])!=st.end()&&ans.find(nums2[i])==ans.end()){
                ans.insert(nums2[i]);
                nums1.push_back(nums2[i]);
            }
        }
       
        return nums1;
    }
};