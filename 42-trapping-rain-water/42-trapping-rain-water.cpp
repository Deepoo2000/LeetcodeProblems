class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 1 || height.size() == 2) return 0;
        int sum = 0, j = 0, i = 0;
        vector<int>v;
        for (i = 0; i < height.size();) {
            if (height[i]) {
                j = i;
                i += 1;
                int ans = 0;
                while (i < height.size() && height[j] > height[i]) {
                    ans += height[j] - height[i];
                    i++;
                }
                if (i >= height.size()) {
                    break;
                }
                else sum += ans;
            }
            else i++;
        }
       /// cout << "Done" << endl;
        if (j < height.size() - 1) {
            for (int i = height.size() - 1; i >= j; i--)v.push_back(height[i]);
            //for (int i = 0; i < v.size(); i++)cout << v[i] << " ";
            j = 0;
            for (int i = 0; i < v.size();) {
                if (v[i]) {
                    j = i;
                    i += 1;
                    int ans = 0;
                    while (i < v.size() && v[j] > v[i]) {
                        ans += v[j] - v[i];
                        i++;
                    }
                    if (i >= v.size()) {
                        break;
                    }
                    else sum += ans;
                }
                else i++;
            }
        }
        return sum;
    }
};