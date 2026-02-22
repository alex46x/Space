
import java.util.Scanner;

public class input {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String name;
        int age;
        double hight;
        char grade;
        System.out.print("Enter Your name : ");
        name = sc.nextLine();
        System.out.print("Enter your age : ");
        age = sc.nextInt();
        System.out.print("Enter your hight : ");
        hight = sc.nextDouble();
        System.out.print("Enter your grade : ");
        grade = sc.next().charAt(0);
        sc.close();
        
        System.out.println("Hi " + name + " ! Your age is " + age + " Your hight is " + hight+"\nAnd your grade is "+grade);
    }
}
