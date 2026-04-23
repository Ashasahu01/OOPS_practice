
import java.util.*;


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