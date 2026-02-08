import java.util.Scanner;

public class ma {
    public static void main(String[] args) {

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                System.out.print("* ");
            }
            System.out.print("\n");
        }

        Innerma obj = new Innerma();
        obj.takeInput();
    }
}

class Innerma {

    Scanner sc = new Scanner(System.in);

    void takeInput() {
        int a = sc.nextInt();
        System.out.print(a);
    }
}
