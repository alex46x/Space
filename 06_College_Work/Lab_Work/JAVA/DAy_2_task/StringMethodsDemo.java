import java.util.Scanner;

public class StringMethodsDemo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("==============================================");
        System.out.println("     JAVA STRING METHODS - FULL DEMO");
        System.out.println("==============================================");

        String s1 = readLineSafe(sc, "Enter first string (s1): ");
        if (s1 == null) return;

        String s2 = readLineSafe(sc, "Enter second string (s2): ");
        if (s2 == null) return;

        System.out.println("\n---------- BASIC TRANSFORMATIONS ----------");
        System.out.println("1) s1.toLowerCase() => " + s1.toLowerCase());
        System.out.println("2) s1.toUpperCase() => " + s1.toUpperCase());

        String oldInput = readLineSafe(sc, "\nEnter a character to replace in s1: ");
        if (oldInput == null) return;
        if (oldInput.isEmpty()) oldInput = " ";
        char oldChar = oldInput.charAt(0);

        String newInput = readLineSafe(sc, "Enter new character: ");
        if (newInput == null) return;
        if (newInput.isEmpty()) newInput = " ";
        char newChar = newInput.charAt(0);

        System.out.println("3) s1.replace('" + oldChar + "', '" + newChar + "') => " 
                + s1.replace(oldChar, newChar));

        System.out.println("\n---------- TRIM EXAMPLE ----------");
        String spaced = readLineSafe(sc, "Enter a string with spaces at start/end: ");
        if (spaced == null) return;
        System.out.println("4) spaced.trim() => [" + spaced.trim() + "]");

        System.out.println("\n---------- COMPARISON METHODS ----------");
        System.out.println("5) s1.equals(s2) => " + s1.equals(s2));
        System.out.println("6) s1.equalsIgnoreCase(s2) => " + s1.equalsIgnoreCase(s2));
        System.out.println("7) s1.compareTo(s2) => " + s1.compareTo(s2));

        System.out.println("\n---------- LENGTH & CHAR ----------");
        System.out.println("8) s1.length() => " + s1.length());

        if (s1.length() > 0) {
            int idx = readIntSafe(sc, "Enter an index for charAt (0 to " 
                    + (s1.length() - 1) + "): ");
            if (idx >= 0 && idx < s1.length()) {
                System.out.println("9) s1.charAt(" + idx + ") => " + s1.charAt(idx));
            } else {
                System.out.println("9) Invalid index. Skipped.");
            }
        }

        System.out.println("\n---------- CONCAT ----------");
        System.out.println("10) s1.concat(s2) => " + s1.concat(s2));

        System.out.println("\n---------- SUBSTRING ----------");
        if (s1.length() > 0) {

            int start = readIntSafe(sc, 
                    "Enter start index for substring(start): ");
            if (start >= 0 && start <= s1.length()) {
                System.out.println("11) s1.substring(" + start + ") => " 
                        + s1.substring(start));
            } else {
                System.out.println("11) Invalid start index. Skipped.");
            }

            int n = readIntSafe(sc, 
                    "Enter start index for substring(start, end): ");
            int m = readIntSafe(sc, 
                    "Enter end index (exclusive): ");

            if (n >= 0 && m <= s1.length() && n < m) {
                System.out.println("12) s1.substring(" + n + ", " + m + ") => " 
                        + s1.substring(n, m));
            } else {
                System.out.println("12) Invalid range. Skipped.");
            }
        }

        System.out.println("\n---------- indexOf ----------");
        String findInput = readLineSafe(sc, 
                "Enter a character to find in s1: ");
        if (findInput == null) return;
        if (findInput.isEmpty()) findInput = " ";
        char findChar = findInput.charAt(0);

        System.out.println("13) s1.indexOf('" + findChar + "') => " 
                + s1.indexOf(findChar));

        int fromIndex = readIntSafe(sc, 
                "Enter fromIndex for indexOf: ");
        System.out.println("14) s1.indexOf('" + findChar + "', " 
                + fromIndex + ") => " 
                + s1.indexOf(findChar, fromIndex));

        System.out.println("\n---------- String.valueOf & toString ----------");

        int num = readIntSafe(sc, "Enter an integer number: ");
        System.out.println("15) String.valueOf(int) => \"" 
                + String.valueOf(num) + "\"");

        Person p = new Person("Sajol", 21);
        System.out.println("16) p.toString() => " + p.toString());
        System.out.println("17) String.valueOf(p) => " 
                + String.valueOf(p));

        double price = 99.75;
        System.out.println("18) String.valueOf(price) => \"" 
                + String.valueOf(price) + "\"");

        System.out.println("\n==============================================");
        System.out.println("All methods executed successfully.");
        System.out.println("==============================================");

        sc.close();
    }

    private static String readLineSafe(Scanner sc, String prompt) {
        System.out.print(prompt);
        if (!sc.hasNextLine()) {
            System.out.println("\nInput ended unexpectedly. Program stopped.");
            return null;
        }
        return sc.nextLine();
    }

    private static int readIntSafe(Scanner sc, String prompt) {
        while (true) {
            String s = readLineSafe(sc, prompt);
            if (s == null) return 0;
            s = s.trim();
            try {
                return Integer.parseInt(s);
            } catch (NumberFormatException e) {
                System.out.println("Invalid number. Please enter again.");
            }
        }
    }

    static class Person {
        private final String name;
        private final int age;

        Person(String name, int age) {
            this.name = name;
            this.age = age;
        }

        @Override
        public String toString() {
            return "Person{name='" + name + "', age=" + age + "}";
        }
    }
}