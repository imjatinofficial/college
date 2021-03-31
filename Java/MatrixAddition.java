import java.util.Scanner;

class MatrixAddition{
    public static void main(String[] args){
        int a[][] = new int[3][3];
        int b[][] = new int[3][3];
        Scanner in = new Scanner(System.in);
        System.out.println("Matrix A");
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                a[i][j] = in.nextInt();
        System.out.println("Matrix B");
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                b[i][j] = in.nextInt();
        System.out.println("Sum of matrix A and B is");
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                System.out.print(a[i][j] + b[i][j] + " ");
            }
            System.out.println();
        }
        in.close();
    }
}
