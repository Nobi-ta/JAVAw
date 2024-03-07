import java.util.Scanner;  

public class Tabel
{
    public static void main(String[] args)
    {
        Scanner console = new Scanner(System.in);
        int num;
        System.out.print("Enter any positive integer:");
        num = console.nextInt();
        System.out.println("Multiplication Tabel of:" + num);
        for(int i = 1;i<=10;i++)
        {
            System.out.println(num+"x"+i+"="+(num*i));
        }
    }
}
