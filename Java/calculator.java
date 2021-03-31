import java.util.Scanner;

class Calculator
{
    public static void main(String[] args)
    { 
        boolean flag = true;
        Scanner in = new Scanner(System.in);
        while(flag == true)
        {
            System.out.println("Enter ('/','*','+','-') or 'e' to exit");
            char op = in.next().charAt(0);
            if(op == 'e')
            {
                System.out.println("GoodBye :)");
                flag = false;
                break;
            }
            System.out.print("a: ");
            float a = in.nextFloat();
            System.out.print("b: ");
            float b = in.nextFloat();
            switch (op) 
            {
            case '/':
                System.out.println("a/b is "+(a/b));
                break;
            case '*':
                System.out.println("a*b is "+(a*b));
                break;
            case '+':
                System.out.println("a+b is "+(a+b));
                break;
            case '-':
                System.out.println("a-b is "+(a-b));
                break;          
            default:
                System.out.println("Wrong Input!");
                break;
            }
        }
        in.close();
    }
}