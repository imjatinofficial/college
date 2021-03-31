import java.util.Scanner;

class PrimeNumbers
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Upper limit: ");
        int n = in.nextInt();
        for(int i = 2; i <= n; i++)
        {
            int flag = 1;
            for(int j = 2; j <= i/2; j++)
            {
                if(i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                System.out.print(i + " ");
            }
        }
        in.close();
    }
}
