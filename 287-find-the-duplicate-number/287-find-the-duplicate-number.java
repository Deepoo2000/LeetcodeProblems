class Solution {
        public int findDuplicate(int[] nums) {
            int n = nums.length;
            long[] freq = new long[100001];
            for(int i = 0; i < nums.length; i++){
                freq[nums[i]]++;
                if(freq[nums[i]] >= 2)return nums[i];
            }
            return 0;
        }
    }