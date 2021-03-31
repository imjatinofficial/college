class A {
    public static void main(String[] args) {
        B obj = new C();
        obj.display();
        // obj.display2();
    }
}

class B{
    void display(){
        System.out.println("This is class B");
    }
}

class C extends B{
    // void display(){
    //     System.out.println("This is class C");
    // }
    // void display2(){
    //     System.out.println("This is the second function of class c");
    // }
}