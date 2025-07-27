/* Write a program to store three numbers, calculate and display the sum
 * of average of all the numbers. */

import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner myInput = new Scanner(System.in);
        System.out.println("Enter three numbers");
        int a = myInput.nextInt();
        int b = myInput.nextInt();
        int c = myInput.nextInt();
        int avg = (a + b + c) / 3;
        System.out.println("Average: " + avg);
    }
}
