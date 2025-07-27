/* Write a program to store your  age if your age is >= 18 then you are
 * eligible for vote atherise your are not eligible for vote. */

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner myInput = new Scanner(System.in);
        System.out.println("Enter your age:");
        int age = myInput.nextInt();
        if (age >= 18)
            System.out.println("You are eligible for vote.");
        else
            System.out.println("You are not eligible for vote.");
    }
}
