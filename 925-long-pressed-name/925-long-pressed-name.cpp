class Solution {
public:
    bool isLongPressedName(string name, string typed) {
         int i=0, j=0;
        int n=name.length(), t = typed.length();
        
        if(name[0]!=typed[0]) return false;
        
        while(i<n || j<t){
            if(name[i] == typed[j]){
                i++,j++;
            }
            else{
                if(typed[j] == typed[j-1]){
                    j++;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
