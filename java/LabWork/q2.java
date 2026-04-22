package LabWork;

import java.util.Scanner;

//q1
public class Factorial {
    public static void main(String[] args) {
        int n = 5;
        int f = 1;
        for(int i = 1; i <= n; i++) f *= i;
        System.out.println("Factorial = " + f);
    }
}

//q2
public class q2 {
     static void countVC(String s) {
        int vowels = 0, consonants = 0;

        s = s.toLowerCase();

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            if (Character.isLetter(ch)) {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
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
public class Fibonacci {
public static void main(String[] args) {
        int n = 5;
        int a = 0, b = 1;
        for(int i = 0; i < n; i++) {
            System.out.print(a + " ");
            int c = a + b;
            a = b;
            b = c;
        }
    }
}

//q4
public class Sum {
    public static void main(String[] args) {
        int arr[] = {51,42,32,54};
        int sum = 0;
        for(int i = 0; i < arr.length; i++) sum += arr[i];
        System.out.println(sum);
    }
}

//q5

public class Armstrong {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = input.nextInt(), temp = n, sum = 0;
        int digits = String.valueOf(n).length();

        temp = n;

        while(temp > 0) {
            int d = temp % 10;
            sum += Math.pow(d, digits);
            temp /= 10;
        }

        if(sum == n)
            System.out.println("Armstrong");
        else
            System.out.println("Not Armstrong");
    }
}

//q6
public class Prime {
    public static void main(String[] args) {
        int n = 197;
        boolean isPrime = true;

        for(int i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime && n > 1)
            System.out.println("Prime");
        else
            System.out.println("Not Prime");
    }
}

//q7
public class AllPrimes {
    public static void main(String[] args) {
        int n = 20;

        for(int i = 2; i <= n; i++) {
            boolean isPrime = true;

            for(int j = 2; j <= i/2; j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime)
                System.out.print(i + " ");
        }
    }
}

//q8
public class LCM {
    public static void main(String[] args) {
        int a = 14, b = 26;
        int max = Math.max(a, b);
        int min = Math.min(a, b);

        for(int i = max; ; i += max) {
            if(i % min == 0) {
                System.out.println("LCM = " + i);
                break;
            }
        }
    }
}

//q9
public class FactorialSum {
    public static void main(String[] args) {
        int n = 8;
        int f = 1, sum = 0;

        for(int i = 1; i <= n; i++) {
            f *= i;
            sum += f;
        }
        System.out.println(sum);
    }
}

//q10
public class Perfect {
    public static void main(String[] args) {
        int n = 6, sum = 0;

        for(int i = 1; i < n; i++) {
            if(n % i == 0)
                sum += i;
        }

        if(sum == n)
            System.out.println("Perfect");
        else
            System.out.println("Not Perfect");
    }
}

//q11
public class ArmstrongTillN {
    public static void main(String[] args) {
        int n = 180000;

        for(int i = 1; i <= n; i++) {
            int temp = i, sum = 0;

            int digits = String.valueOf(i).length();

            while(temp > 0) {
                int d = temp % 10;
                sum += Math.pow(d, digits);
                temp /= 10;
            }

            if(sum == i)
                System.out.print(i + " ");
        }
    }
}

//q12
public class Diamond {
    public static void main(String[] args) {
        int n = 5;

        for(int i = 1; i <= n; i++) {
            for(int j = i; j < n; j++)
                System.out.print(" ");
            for(int j = 1; j <= 2*i-1; j++)
                System.out.print("*");
            System.out.println();
        }

        for(int i = n-1; i >= 1; i--) {
            for(int j = n; j > i; j--)
                System.out.print(" ");
            for(int j = 1; j <= 2*i-1; j++)
                System.out.print("*");
            System.out.println();
        }
    }
}
  

//q14
public class HollowSquare {
    public static void main(String[] args) {
        int n = 8;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i == 1 || i == n || j == 1 || j == n)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.println();
        }
    }
}

//q15
public class Pascal {
    public static void main(String[] args) {
        int n = 6;

        for(int i = 0; i < n; i++) {
            int num = 1;
            for(int j = i; j < n; j++)
                System.out.print(" ");
            for(int j = 0; j <= i; j++) {
                System.out.print(num + " ");
                num = num * (i - j) / (j + 1);
            }
            System.out.println();
        }
    }
}

