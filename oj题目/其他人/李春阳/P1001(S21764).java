
import java.util.Scanner;


public class Main {

	public static void main(String[] args){
		Scanner scan=new Scanner(System.in);
	    String line="";
	    while(scan.hasNextLine()){
	    	line=scan.nextLine();
	    	String[] arr=line.split(" ");
	    	int a=Integer.parseInt(arr[0]);
	    	int b=Integer.parseInt(arr[1]);
	    	System.out.println(a+b);
	    }
	    scan.close();
	}

}
