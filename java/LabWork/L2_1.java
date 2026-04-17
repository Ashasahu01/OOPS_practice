// import java.util.Scanner;
package LabWork;

public class L2_1 {
    
	public static void main(String[] args) {
	    
		Scanner sc = new Scanner(System.in);
		System.out.print("Type Something: ");
		
		String s = sc.nextLine();
		
		s = s.toLowerCase();
		
		int[] count = new int[26];
		
		for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch != ' ')
                count[ch - 'a']++;
        }
        
        for (int i = 0; i < 26; i++) {
            if (count[i] <= 0){
                System.out.println(false);
                return;
            }
        }
        
        System.out.println(true);
        return;
		
	}
}
