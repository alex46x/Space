
import java.util.Scanner;

public class Max_manual {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int larg = a;
        if (b > a) {
            larg = b;
        }
        if (c > b) {
            larg = c;
        }
        
        System.out.println("The largest number is : "+ larg);
    }
}
