class Solution {
public:
    bool canReach(vector<int>& arr, int start, int i = 0) {
        if (i >= arr.size())return false;
        if (start >= arr.size())return false;
        if (arr[start] == 0)return true;
return canReach(arr, start + arr[start], i + 1) || canReach(arr, start - arr[start], i + 1);
    }
};