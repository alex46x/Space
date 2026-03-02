


public class Ar {
    final static int ROW = 20;
    final static int COL = 20;
    
    public static void main(String[] args) {
        int product[][] = new int[ROW][COL];
        // int row. col:
        System.out.println("Multipiction table");
        System.out.println("    ");
        for (int i = 0; i < ROW; i++) {
            for (int j = 0; j < COL; j++) {
                product [i][j]=i*j;
                System.out.println(" "+product[i][j]);
            }
            System.out.println(" ");
        }
    }
    
}
