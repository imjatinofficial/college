import java.util.Scanner;

class Switch{
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter \n'a : addition'\n's : subtraction'\n'm : multiplication'\n'd : Division'");
        char a = in.next().charAt(0);
        System.out.println("Enter 2 numbers: ");
        int x = in.nextInt();
        int y = in.nextInt();
        switch (a) {
            case 'm':
            in.close();
                System.out.print(x*y);
                break;
            case 'a':
                System.out.print(x+y);
                break;
            case 's':
                System.out.print(x-y);
                break;
            case 'd':
                System.out.print(x/y);
                break;
            default:
                System.out.print("Wrong Input!");
                break;
        }
        in.close();
    }
}