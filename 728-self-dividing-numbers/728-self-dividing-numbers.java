class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> list=new ArrayList<Integer>();
        for(int i = left; i <= right; i++){
            int x = i, count = 0;
            while(x > 0){
                try {
                    int r = x % 10;
                    if(r == 0)count = 1;
                    else {
                    if (i % r != 0) {
                        count = 1;
                        break;
                    }
                    }
                }
                catch (RuntimeException r){
                    break;
                }
                x /= 10;
            }
            if(count == 0)list.add(i);
        }
        return list;
    }
}