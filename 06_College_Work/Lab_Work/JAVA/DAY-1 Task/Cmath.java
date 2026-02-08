public class Cmath {

    static final double PI = 3.1416;
    static final int MAX = 180;

    public static void main(String[] args) {

        int angle = 0;
        double x, y;

        System.out.println("Angle    Cos\n");

        while (angle <= MAX) {
            x = (PI / MAX) * angle;
            y = Math.cos(x);

            System.out.printf("%d    %.4f\n", angle, y);

            angle += 10;
        }
    }
}
