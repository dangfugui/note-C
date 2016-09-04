import java.util.Scanner;
 
public class Main {
    public static void main(String[] args){
        //while(true){
            fun();
        //}
    }
     
    public static void fun(){
        Scanner inputScanner = new Scanner(System.in);
        long n;
        n = inputScanner.nextLong();
        inputScanner.close();
        for(long i = 2; ; i++)
        {
            if(i * 2 > n)
            {
                System.out.println("NO");
                return;
            }
            for(long j = 2; ; j++)
            {
                long nn = (long) ((java.lang.Math.pow((double)j,(double)i) - 1) * j / (j - 1));
                if(nn == n){
                    System.out.println("YES");
                    return;
                }
                if(nn > n)
                {
                    break;
                }
            }
        }
    }
}
