import java.util.Scanner;  

public class PrintNumbers
{
    public static void main(String[] args)
    {
        Scanner console = new Scanner(System.in);
        int num;
        System.out.print("Enter the value of N:");
        num = console.nextInt();
        for(int i = 1;i<=num;i++)
        {
            System.out.println(i);
        }
    }
}
