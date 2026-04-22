package LabWork;

import java.util.Scanner;

public class q6 {
    public static void main(String[] args){
    int num , count = 0;

    Scanner s = new Scanner(System.in);

    System.out.print("Enter any number: ");
    num = s.nextInt();

    for(int i = 2; i<num; i++){
        if(num % i == 0){
            count++;
            break;
        }
    }

    if(count == 0)
        System.out.println(num + " is a prime number");
    else
       System.out.println(num + " is not a prime number"); 
    
    s.close();
}
}