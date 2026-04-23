import java.util.HashSet;
import java.util.Set;

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
