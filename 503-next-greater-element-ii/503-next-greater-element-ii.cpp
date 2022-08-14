class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>num;
        num = nums;
        for (int i = 0; i < nums.size(); i++)
            num.push_back(nums[i]);
        vector<int>v(num.size(), -1);
        for (int i = 0; i < num.size(); i++) {
            while (!st.empty() && num[st.top()] < num[i]) {
                v[st.top()] = num[i];
                st.pop();
            }
            st.push(i);
        }
        int n = nums.size();
        while(n--)v.pop_back();
        return v;
    }
};