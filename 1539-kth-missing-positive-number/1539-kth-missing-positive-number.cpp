class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int r = arr.size() - 1, l  = 0;
        int md = 0;
        while(l <= r){
            md = l + (r - l) / 2;
            if(arr[md] - md - 1 < k)l = md + 1; 
            else r = md - 1;
        }
        return k + l;
    }
};