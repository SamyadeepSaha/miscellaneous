public class Basics {
    public static void main(String[] args) {
        System.out.println("Hello World");
        System.out.print(27);
        System.out.println();

        // Variables
        System.out.println("\n");
        System.out.println("Variables");
        String name = "Akash";
        int myNum = 45;
        System.out.println(name);
        System.out.println(myNum);
        // Constant variable
        final int myConst = 39;
        System.out.println(myConst);

        // String concat
        System.out.println("\n");
        System.out.println("String concat");
        String firstName = "Akash";
        String lastName = "Saha";
        String fullName = firstName + lastName;
        System.out.println(fullName);
        System.out.println(firstName.concat(lastName));
        // Sting and number concat
        String x = "19";
        int y = 98;
        System.out.println(x + y);

        // Plus on int or float
        System.out.println("\n");
        System.out.println("Plus on int or float");
        int a = 3, b = 5;
        System.out.println(a + b);

        // Type casting
        System.out.println("\n");
        System.out.println("Type casting");
        int myInt;
        double myDouble;
        // Automatic casting
        myInt = 9;
        myDouble = myInt;
        System.out.println(myInt);
        System.out.println(myDouble);
        // Manual casting
        myDouble = 3.14;
        myInt = (int) myDouble;
        System.out.println(myDouble);
        System.out.println(myInt);

        // String
        System.out.println("\n");
        System.out.println("String");
        String txt = "Please locate where 'locate' occurs!";
        System.out.println(txt.indexOf("locate"));

        // Math
        System.out.println("\n");
        System.out.println("Math");
        int p = (int) (Math.random() * 100);
        int q = (int) (Math.random() * 100);
        System.out.println("Minimum: " + Math.min(p, q));
        System.out.println("Maximum: " + Math.max(p, q));

        // Conditional statement
        System.out.println("\n");
        System.out.println("Conditional statement");
        int time = 20;
        if (time < 10) {
            System.out.println("Good Morning!");
        } else if (time < 18) {
            System.out.println("Good Day!");
        } else if (time < 22) {
            System.out.println("Good Evening!");
        } else {
            System.out.println("Good Night!");
        }

        // Loops
        System.out.println("\nLoops");
        // while
        System.out.println("while loop");
        int count = 1;
        while (count < 5) {
            System.out.println(count);
            count++;
        }
        // do-while
        System.out.println("do-while loop");
        count = 1;
        do {
            System.out.println(count);
            count++;
        } while (count < 5);
        // for (also nested loop)
        System.out.println("for (also nested loop)");
        for (int i = 1; i < 5; i++) {
            // outer loop
            System.out.print(i + ":");
            for (int j = 1; j <= 10; j++)
                System.out.print("\t" + (j * i)); // inner loop
            System.out.println();
        }
        // for-each
        System.out.println("for-each");
        String[] bikes = {"Honda", "Bajaj", "RoyalEnfield", "Yamaha"};
        for (String bike : bikes)
            System.out.println(bike);
        // break
        System.out.println("break");
        for (int i = 1; i < 5; i++) {
            if (i == 3) break;
            System.out.println(i);
        }
        // continue
        System.out.println("continue");
        for (int i = 1; i < 5; i++) {
            if (i == 3) continue;
            System.out.println(i);
        }

        // Array
        int[] arr = {1, 2, 3};
        int[][] matrix = { {1, 2, 3}, {4, 5, 6}};
    }
}
