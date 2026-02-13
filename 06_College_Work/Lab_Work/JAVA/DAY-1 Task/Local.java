import java.sql.*;

class Main {
    public static void main(String[] args) throws Exception {

        Connection con = DriverManager.getConnection(
                "jdbc:mysql://localhost:3306/db",
                "root",
                "password"
        );

        if(con != null){
            System.out.println("Database Connected");
        }
    }
}
