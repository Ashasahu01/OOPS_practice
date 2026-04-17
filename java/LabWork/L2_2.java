package LabWork;

public class L2_2 {
public static int[] removeDuplicates(int[] arr) {

    int n = arr.length;
    int[] temp = new int[n];   // temporary array
    int k = 0;               

    for (int i = 0; i < n; i++) {

        boolean isDuplicate = false;

        for (int j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            temp[k] = arr[i];
            // System.out.print(temp[k]);
            k++;
        }
    }

    int[] result = new int[k];
    for (int i = 0; i < k; i++) {
        result[i] = temp[i];
    }

    return result;
}
}