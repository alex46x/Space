public class TypeConversion {
    public static void main(String[] args) {

        // int -> double
        int a = 10;
        double b = a;

        // double -> int
        double x = 9.8;
        int y = (int) x;

        // String -> int
        String s1 = "100";
        int num1 = Integer.parseInt(s1);

        // int -> String
        String s2 = String.valueOf(a);

        System.out.println("int to double: " + b);
        System.out.println("double to int: " + y);
        System.out.println("String to int: " + num1);
        System.out.println("int to String: " + s2);
    }
}