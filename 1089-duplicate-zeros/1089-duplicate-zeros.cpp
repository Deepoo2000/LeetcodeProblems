class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>v;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0){
                v.push_back(0);v.push_back(0);
            }
            else if(arr[i] != 0)v.push_back(arr[i]);
            if(v.size() >= arr.size()){
                break;
            }
        }
        if(v.size() > arr.size())v.pop_back();
        arr = v;
    }
};