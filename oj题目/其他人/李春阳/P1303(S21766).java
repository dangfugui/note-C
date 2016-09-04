
import java.math.BigInteger;
import java.util.Scanner;


public class Main {

	public static void main(String[] args){
		Scanner scan=new Scanner(System.in);
	    String line="";
	    while(scan.hasNextBigInteger()){
	    	BigInteger b1=scan.nextBigInteger();
	    	BigInteger b2=scan.nextBigInteger();
	    	System.out.println(b1.add(b2));
	    }
	    scan.close();
	}

}
