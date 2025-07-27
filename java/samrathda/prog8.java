/* Write a program to store three numbers and display the smallest
 * number out of three numbers. */

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner myInput = new Scanner(System.in);
        System.out.println("Enter three numbers");
        int a = myInput.nextInt();
        int b = myInput.nextInt();
        int c = myInput.nextInt();
        if (a < b && a < c)
            System.out.println(a + " is the smallest");
        else if (b < c)
            System.out.println(b + " is the smallest");
        else
            System.out.println(c + " is the smallest");
    }
}
