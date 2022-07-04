 class Solution {
        public boolean rotateString(String s, String goal) {
            if (s.length() != goal.length()) return false;
            int n = s.length();
            while (n > 0) {
                if(s.equals(goal))return true;
                String c = s.substring(0,1);
                s += c;
                s = s.substring(1);
                n--;
            }
            return false;
        }
    }