
import java.util.Scanner;

public class Prime {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        boolean P = true;
        if (n < 1) {
            P = false;
        }
        for (int i = 0; i < n / 2; i++) {
            if (n % i == 0) {
                P = false;
            }
        }

        // System.out.print((P) ? "Prime" : "Not Prime");
        if (P) {
            System.out.println("prime ");
        } else {
            System.out.println("Not Prime");
        }
    }
}
