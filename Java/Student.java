import java.util.Scanner;

class Student{
    int uid;
    String name;
    static String course = "BCA4B";
    public void Input(int uid, String name){
        System.out.println("UID: " + uid);
        System.out.println("Name: " + name);
        System.out.println("Course: " + course);
    }
    
    public static void main(String args[]){
        Student s0 = new Student();
        Student s1 = new Student();
        Student s2 = new Student();
        s0.Input(1105, "Jatin");
        s1.Input(1130, "Gagan");
        s2.Input(1106, "Tushar");
    }
}
