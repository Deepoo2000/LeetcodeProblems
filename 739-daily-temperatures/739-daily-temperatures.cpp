class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v, num(temperatures.size(), 0);
        v = temperatures;
        stack<int>st;
        for (int i = 0; i < v.size(); i++) {
            while (!st.empty() && v[st.top()] < v[i]) {
                num[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return num;
    }
};