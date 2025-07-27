/* Write a program to store any number. Check and display the is odd
 * number or even number. */

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner myInput = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = myInput.nextInt();
        if (num % 2 == 0)
            System.out.println("This is an even number.");
        else
            System.out.println("This is an odd number.");
    }
}
