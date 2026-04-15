package LabWork;
public class q3 {
    
    static boolean isAnagram(String s1, String s2) {

        s1 = s1.toLowerCase();
        s2 = s2.toLowerCase();

    
        int[] count = new int[26];

        for (int i = 0; i < s1.length(); i++) {
            char ch = s1.charAt(i);
            if (ch != ' ')
                count[ch - 'a']++;
        }

        for (int i = 0; i < s2.length(); i++) {
            char ch = s2.charAt(i);
            if (ch != ' ')
                count[ch - 'a']--;
        }
        
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)
                return false;
        }

        return true;

    }
}
