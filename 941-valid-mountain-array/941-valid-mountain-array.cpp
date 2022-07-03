class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int index = -1;
        for(int i = 0; i < arr.size() - 1; i++){
           if(arr[i] == arr[i + 1])return false;
           if(arr[i] > arr[i + 1]){
               index = i;
               break;
           }
        }
        if(index == -1 || index == 0)return 0;
        cout<<index<<endl;
        for(int i = index; i < arr.size() - 1; i++){
           if(arr[i] == arr[i + 1])return false;
           if(arr[i] < arr[i + 1]) return false;
        }
        return 1;
        /*
        [2,1]
        [3,5,5]
[0,3,2,1]
[0,2,3,5,2,1,0]
[0,0,0,0,0,0]
[0,1,2,3,4,5,6,7,8,9]
[0,1,2,3,4,5,6,0]
        */
    }
};