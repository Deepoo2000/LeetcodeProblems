  class Solution {
        public int minSubArrayLen(int target, int[] nums) {
            int l = 0;
            int ans = 100009;
            int sum = 0;
            int index = 0;
            while(l < nums.length){
                 sum+=nums[l++];
                while(sum >= target){
                    ans = Math.min(ans, (l - index));
                    sum -= nums[index];
                    index++;
                }
                //System.out.println(l + " "+ index);
            }
            if(ans==100009)return 0;
            return ans;
        }
    }