import java.util.Vector;

class String4 {

    public static void main(String args[]) {

        Vector<String> list = new Vector<>();

        for (int i = 0; i < args.length; i++) {
            list.add(args[i]);
        }

        if (list.size() >= 2)
            list.insertElementAt("COBOL", 2);
        else
            list.add("COBOL");

        String listArray[] = new String[list.size()];
        list.copyInto(listArray);

        System.out.println("List of Languages");

        for (int i = 0; i < listArray.length; i++) {
            System.out.println(listArray[i]);
        }
    }
}