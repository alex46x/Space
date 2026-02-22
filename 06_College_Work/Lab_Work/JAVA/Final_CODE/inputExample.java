import java.util.Scanner;

public class inputExample {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Age: ");
        int age = sc.nextInt();

        System.out.print("Enter Salary: ");
        double salary = sc.nextDouble();

        System.out.print("Enter Grade: ");
        char grade = sc.next().charAt(0);

        System.out.print("Are you student (true/false): ");
        boolean student = sc.nextBoolean();

        System.out.println("\n---- Output ----");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Salary: " + salary);
        System.out.println("Grade: " + grade);
        System.out.println("Student: " + student);

        sc.close();
    }
}