import java.util.Scanner;  

public class PrintNumbers
{
    public static void main(String[] args)
    {
        Scanner console = new Scanner(System.in);
        int num;
        int sum = 0;
        System.out.print("Enter the value of N:");
        num = console.nextInt();
        for(int i = 1;i<=num;i++)
        {
           sum += i;
        }
         System.out.println("sum:"+sum);
    }
}
