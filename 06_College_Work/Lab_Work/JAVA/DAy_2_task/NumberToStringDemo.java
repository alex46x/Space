class NumberToStringDemo {

    public static void main(String[] args) {

        int i = 25;
        float f = 10.75f;
        double d = 123.456;
        long l = 9876543210L;

        String str1 = Integer.toString(i);
        String str2 = Float.toString(f);
        String str3 = Double.toString(d);
        String str4 = Long.toString(l);

        System.out.println("Integer to String: " + str1);
        System.out.println("Float to String: " + str2);
        System.out.println("Double to String: " + str3);
        System.out.println("Long to String: " + str4);
    }
}