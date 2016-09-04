import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		int n=Integer.parseInt(scan.nextLine());
		String[] s=new String[n];
		for(int i=0;i<n;i++){
			s[i]=scan.nextLine();
		}
		String t=scan.nextLine();
		//System.out.println(Arrays.toString(s));
		for(int j=0;j<n;j++)
		{
			String a=t;
			int sum=0;
			int index=0;
			while((index=a.indexOf(s[j]))!=-1){
				sum++;
				a=a.substring(index+1,a.length());
			}
			System.out.print(sum);
			if(j!=n-1)
				System.out.print(" ");
			//System.out.println(t);
		}
	}

}
