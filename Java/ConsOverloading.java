class ConsOverloading{
    ConsOverloading(int num){
        System.out.println("Displays the integer " + num);
    }
    ConsOverloading(float num){
        System.out.println("Displays the float " + num);
    }
    public static void main(String[] args){
        ConsOverloading square = new ConsOverloading(2);
        ConsOverloading square1 = new ConsOverloading(4.0f);
    }
}