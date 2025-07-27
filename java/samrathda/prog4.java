/* Write a program to store two no and interchange the two numbers by
 * using 3rd variable. */

class Main {
    public static void main(String[] args) {
        int a = 3;
        int b = 5;
        System.out.println("Before interchange");
        System.out.println("a = " + a + ", b = " + b);

        int c = b;
        b = a;
        a = c;
        System.out.println("After interchange");
        System.out.println("a = " + a + ", b = " + b);

        // Without 3rd variable
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("After interchange with extra variable");
        System.out.println("a = " + a + ", b = " + b);
    }
}
