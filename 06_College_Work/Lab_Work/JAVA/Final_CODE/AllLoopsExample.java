import java.util.Scanner;

public class AllLoopsExample {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // 1️ FOR LOOP
        System.out.println("For Loop (1 to 5):");
        for (int i = 1; i <= 5; i++) {
            System.out.println(i);
        }

        // 2️ WHILE LOOP
        System.out.println("\nWhile Loop (1 to 3):");
        int j = 1;
        while (j <= 3) {
            System.out.println(j);
            j++;
        }

        // 3️ DO-WHILE LOOP
        System.out.println("\nDo-While Loop (1 to 3):");
        int k = 1;
        do {
            System.out.println(k);
            k++;
        } while (k <= 3);

        // 4️ FOR-EACH LOOP
        System.out.println("\nFor-Each Loop (Array):");
        int[] numbers = {10, 20, 30, 40};

        for (int num : numbers) {
            System.out.println(num);
        }

        // 5️ BREAK Example
        System.out.println("\nBreak Example:");
        for (int x = 1; x <= 5; x++) {
            if (x == 3) {
                break;
            }
            System.out.println(x);
        }

        // 6️ CONTINUE Example
        System.out.println("\nContinue Example:");
        for (int y = 1; y <= 5; y++) {
            if (y == 3) {
                continue;
            }
            System.out.println(y);
        }

        // 7️ NESTED LOOP (Pattern)
        System.out.println("\nNested Loop Pattern:");
        for (int row = 1; row <= 3; row++) {
            for (int col = 1; col <= 5; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }

        sc.close();
    }
}