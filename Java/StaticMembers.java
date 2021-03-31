class StaticMembers{
    static String course = "BCA";
    String name;
    public static void display(String course){
        System.out.println("Course: " + course);
    }
    void display(){
        System.out.println("Name: " + name);
    }
    public static void main(String[] args){
        StaticMembers o = new StaticMembers();
        o.name = "Jatin";
        o.display();
        display(course);
    }
}