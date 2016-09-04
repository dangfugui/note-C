import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		while(scan.hasNextBigDecimal()){
			BigDecimal b1=scan.nextBigDecimal();
			BigDecimal b2=scan.nextBigDecimal();
			if(b1.compareTo(b2)==0){
				System.out.println("yes");
			}else{
				System.out.println("no");
			}
		}
		scan.close();
	}

}
