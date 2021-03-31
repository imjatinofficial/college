class StringMethods{
    public static void main(String[] args){
        String s = "String 1";
        String t = "String 2";
        System.out.println(s.length() + "\n" + s.toLowerCase() + "\n" + s.toUpperCase() + "\n" + s.concat(t));
        int a = 5;
        System.out.printf("I have %d apples \n", a);
        char ch[] = {'J', 'a', 't', 'i', 'n'};
        String u = new String(ch);
        System.out.println(u);
    }
}