class Solution {
public:
    string intToRoman(int num) {
        map<int, string> mp = {
                                 {1,"I"},
                                 {4,"IV"},
                                 {5,"V"},
                                 {9,"IX"},
                                 {10,"X"},
                                 {40,"XL"},
                                 {50,"L"},
                                 {90,"XC"},
                                 {100,"C"},
                                 {400,"CD"},
                                 {500,"D"},
                                 {900,"CM"},
                                 {1000,"M"}
        };
        vector<int>p{ 1,4,5,9,10,40,50,90,100,400,500,900,1000 };
        vector<int>v;
        int n = num;
        int count = 0;
        while (n > 0) {
            v.push_back(n % 10);
            n /= 10;
            count++;
        }
        n = 1;
        while (count--)n *= 10;
        n /= 10;
        for (int i = v.size() - 1; i >= 0; i--) {
            v[i] *= n;
            n /= 10;
        }
        string ans = "";
        for (int i = v.size() - 1; i >= 0; i--)cout << v[i] << " ";
        cout<<endl;
        for (int i = v.size() - 1; i >= 0; i--) {
            if (mp.find(v[i]) != mp.end()) {
                ans += mp[v[i]];
            }
            else {
                if(v[i]!=0){
                int index = lower_bound(p.begin(), p.end(), v[i]) - p.begin();
                index--;
                //cout<<p[index]<<" ";
                ans += mp[p[index]];
                int last = v[i] -  p[index];
                //cout<<last<<" ";
                while (last >= 1000 && last > 0)ans += "M", last -= 1000;
                while (last >= 100 && last > 0)ans += "C", last -= 100;
                while (last >= 10 && last > 0)ans += "X", last -= 10;
                while (last >= 1 && last > 0)ans += "I", last--;
                }
            }
        }
        return ans;
    }
};