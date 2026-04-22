// 
package LabWork;
import java.util.Scanner;
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

//q2
public class Count {
    public static void main(String[] args) {
        String s = "Testing check";
        int vowels = 0, consonants = 0;

        s = s.toLowerCase();

        for(char c : s.toCharArray()) {
            if(Character.isLetter(c)) {
                if("aeiou".indexOf(c) != -1)
                    vowels++;
                else
                    consonants++;
            }
        }

        System.out.println("Vowels: " + vowels);
        System.out.println("Consonants: " + consonants);
    }
}

//q3
public class Anagram {
    public static void main(String[] args) {
        String s1 = "earth";
        String s2 = "heart";

        char[] a = s1.toCharArray();
        char[] b = s2.toCharArray();

        Arrays.sort(a);
        Arrays.sort(b);

        System.out.println(Arrays.equals(a, b));
    }
}

//q6

public class Balance {
    public static void main(String[] args) throws StackUnderflowException {
        String s = "{()]";
        Stack<Character> st = new Stack<>();

        for(char c : s.toCharArray()) {
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if(st.isEmpty()) {
                    System.out.println(false);
                    return;
                }

                char top = st.pop();

                if((c == ')' && top != '(') ||
                        (c == '}' && top != '{') ||
                        (c == ']' && top != '[')) {
                    System.out.println(false);
                    return;
                }
            }
        }

        System.out.println(st.isEmpty());
    }
}

public class Pair {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int target = 6;

        Set<Integer> set = new HashSet<>();

        for(int num : arr) {
            int complement = target - num;

            if(set.contains(complement)) {
                System.out.println(num + " " + complement);
            }

            set.add(num);
        }
    }
}

//q5


//q7
public class SecondLargest {
    public static void main(String[] args) {
        int[] arr = {15, 55, 55, 28, 0};

        int first = Integer.MIN_VALUE;
        int second = Integer.MIN_VALUE;

        for(int num : arr) {
            if(num > first) {
                second = first;
                first = num;
            } else if(num > second && num != first) {
                second = num;
            }
        }

        System.out.println("Second largest = " + second);
    }
}