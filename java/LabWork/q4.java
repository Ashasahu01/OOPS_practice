package LabWork;

public class q4 {
    static void findPairs(int[] arr, int target) {

        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {

                if (arr[i] + arr[j] == target) {

                    int a = Math.min(arr[i], arr[j]);
                    int b = Math.max(arr[i], arr[j]);

                    System.out.println(a + " , " + b);
                }
            }
        }
    }

    public static void main(String[] args)    {
        int[] arr = {2, 4, 3, 5, 7, 8, 9};
        int target = 7;

        findPairs(arr, target);
    }
}
