class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> v  {
            {1000, "M"},{900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},{90, "XC"}, {50, "L"},{40, "XL"}, {10, "X"},{9, "IX"}, {5, "V"},
            {4, "IV"},{1, "I"}
        };        
        int i = 0, n =v.size();
        string ans = "";
        while(i<n && num>0){
            int x = num/v[i].first;
            for(int j=0;j<x;j++)
            {
                ans+=v[i].second;
            }
            num = num%v[i].first;
            i++;
        }
        return ans;
    }
};