class Solution {
public:
    bool power(int n){
      return false;  
    }
    bool isPowerOfTwo(int n) {
        if(n<1)return false;
    for(int i=0;i<32;i++){
        if(pow(2,i)==n)return true;
    }        
        return false;
    }
};