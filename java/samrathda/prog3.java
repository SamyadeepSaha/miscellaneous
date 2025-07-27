/* Write a program to store your name, your fathers name, class section
 * and roll no and display it on screen. */

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner myInput = new Scanner(System.in);
        System.out.println("Name:");
        String name = myInput.nextLine();
        System.out.println("Father's Name:");
        String father = myInput.nextLine();
        System.out.println("Class Section:");
        String section = myInput.nextLine();
        System.out.println("Roll:");
        String roll = myInput.nextLine();
        System.out.println("Name: " + name);
        System.out.println("Father's Name: " + father);
        System.out.println("Class Section: " + section);
        System.out.println("Roll: " + roll);
    }
}
