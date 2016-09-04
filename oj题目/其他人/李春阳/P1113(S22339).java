import java.io.BufferedInputStream;
import java.math.BigInteger;
import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		while(scan.hasNextLine()){
			String line=scan.nextLine();
			if(line.equals("")){
				break;
			}
			String[] arr=line.split(" ");
			StringBuffer b1=new StringBuffer();
			StringBuffer b2=new StringBuffer();
			if(arr.length==2){
				String[] t1=arr[0].split(",");
				for(int i=0;i<t1.length;i++){
					b1.append(t1[i]);
				}
				String[] t2=arr[1].split(",");
				for(int i=0;i<t2.length;i++){
					b2.append(t2[i]);
				}
			}
			System.out.println(Integer.parseInt(b1.toString())+Integer.parseInt(b2.toString()));;
		}
		scan.close();
	}
}