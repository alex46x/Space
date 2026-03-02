class String3 {

    public static void main(String args[]) {

        StringBuffer str = new StringBuffer("Java language");

        for (int i = 0; i < str.length(); i++) {
            int p = i + 1;
            System.out.println("Character at position : " + p + " is " + str.charAt(i));
        }

        StringBuffer aString = new StringBuffer(str.toString());
        int pos = aString.indexOf("language");
        str.insert(pos, "process Oriented ");
        System.out.println("Modified string : " + str);

        str.setCharAt(6, '-');
        System.out.println("String now : " + str);

        str.append(" improves security.");
        System.out.println("Appended string : " + str);
    }
}