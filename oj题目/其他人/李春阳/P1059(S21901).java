import java.io.BufferedInputStream;
import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
		Scanner scan=new Scanner(new BufferedInputStream(System.in));
		String line="";
		while(scan.hasNextLine()){
			line=scan.nextLine();
			if(line.equals("#")){
				break;
			}
			StringBuffer buffer=new StringBuffer();
			int index=0;
			for(int i=0;i<line.length();i++){
				if(line.charAt(i)==' '){
					buffer.append("%20");
				}else if(line.charAt(i)=='!'){
					buffer.append("%21");
				}else if(line.charAt(i)=='$'){
					buffer.append("%24");
				}else if(line.charAt(i)=='%'){
					buffer.append("%25");
				}else if(line.charAt(i)=='('){
					buffer.append("%28");
				}else if(line.charAt(i)==')'){
					buffer.append("%29");
				}else if(line.charAt(i)=='*'){
					buffer.append("%2a");
				}else{
					buffer.append(line.charAt(i));
				}
			}
			System.out.println(buffer.toString());
		}
                scan.close();
	}

}
