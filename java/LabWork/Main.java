import java.util.HashSet;
import java.util.Set;

public class Main {
    static Set<String> seen = new HashSet<>();
    public static void main(String[] args) {
        String str = "aab";
        permute(str, 0);
    }

    static void permute(String str, int idx) {

        if (idx == str.length()) {
            if(!seen.contains(str)) {
                System.out.println(str);
                seen.add(str);
            }
            return;
        }

        for (int i = idx; i < str.length(); i++) {
            str = swap(str, idx, i);
            permute(str, idx + 1);
            str = swap(str, idx, i);
        }
    }

    static String swap(String s, int i, int j) {
        char[] arr = s.toCharArray();
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        return new String(arr);
    }
}