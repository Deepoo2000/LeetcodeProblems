class Solution {
public:
    int countOdds(int low, int high) {
        if((low & 1) && (high & 1)){
            if(low == high) return 1;
            return (high - low) / 2 + (1);
        }
        if(!(low & 1) && (high & 1)){
            low++;
            if(low == high) return 1;
            return (high - low) / 2 + (1);
        }
        if((low & 1) && !(high & 1)){
            high--;
            if(low == high) return 1;
            return (high - low) / 2 + (1);
        }
        if(!(low & 1) && !(high & 1)){
            if(low == high)return 0;
            high--;
            low++;
            return (high - low) / 2 + (1);
        }
        return 0;
    }
};