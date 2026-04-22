package LabWork;

import java.util.Scanner;

public class q7 {
    public static void main(String[] args){
    int i = 0, num , count = 0;

    Scanner s = new Scanner(System.in);

    String primeNum = "";
    System.out.print("Enter any number : ");
    int n = s.nextInt();

    for(i = 1; i<n; i++){
        int counter = 0;
        for(num = i; num>=1; num--){
            if(i % num == 0)
                counter++;
        }
    }


    if(count == 2)
        primeNum = primeNum + i + " ";
    
    System.out.print("Prime Numbers : ");
    System.out.print(primeNum);

    s.close();
}
}
