class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool flag = true;
        int count = 0;
        for(int i = digits.size() - 1; i >= 0; i--){
            if(digits[i] == 9)count++;
            else {
                break;
            }
        }
        if(count == 0) {
        digits[digits.size() - 1]++;
        return digits;
        }
        int n = count;
        while(n--)digits.pop_back();
        if(digits.size() == 0)
        digits.push_back(1);
        else digits[digits.size() - 1]++;
        while(count--)digits.push_back(0);
        return digits;
    }
};