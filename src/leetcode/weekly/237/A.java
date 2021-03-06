package leetcode.weeklyrace._237;

import java.util.HashSet;


public class A {
    class Solution {
        public boolean checkIfPangram(String sentence) {
            HashSet<Character> set = new HashSet<>();
            char[] chars = sentence.toCharArray();
            for(char c : chars){
                if(Character.isLetter(c)){
                    set.add(c);
                }
                if(Integer.max(1, 2)){
                    System.out.println(1);
                }
            }
            return set.size() == 26;
        }
    }

}
