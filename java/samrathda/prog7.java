/* Write a program to store the rainfall in a day if rainfall is greater
 * than 50 print very high, if rainfall ins greater than 25, but less
 * than = 50, print high, if rainfall is greater than 15 but less than
 * = 25 print medium, if rainfall is greater than 5 but less than equal
 * to 15. */

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner myInput = new Scanner(System.in);
        System.out.println("Enter amount of rainfall");
        int rain = myInput.nextInt();
        if (rain > 50) {
            System.out.println("Very High");
        } else if (rain > 25) {
            System.out.println("High");
        } else if (rain > 15) {
            System.out.println("Medium");
        } else if (rain > 5) {
            System.out.println("Low");
        }
    }
}
