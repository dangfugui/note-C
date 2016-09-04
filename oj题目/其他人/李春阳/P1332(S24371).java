import java.io.BufferedInputStream;
import java.util.Scanner;


public class Main {
	
	public static void main(String[] args) {
		int[][] a = new int[110][110];
		Scanner cin = new Scanner(new BufferedInputStream(System.in));
		int n,k;
		n = cin.nextInt();
		k = cin.nextInt();
		for (int i = 1; i <= n; i++) {
			
			for (int j = 1; j <= n; j++) {
				a[i][j] = cin.nextInt();
			}
		}
		//String com;
		cin.nextLine();
		for (int i = 0; i < k; i++) {	
			String str = null;
			if(cin.hasNext()) {
				str = cin.next();
			}
			int row = 0,col = 0;
			if(cin.hasNextInt())
				row = cin.nextInt();
			if(cin.hasNextInt())
				col = cin.nextInt();
			if(str!=null && row!=0 && col != 0) {
				
				if(str.charAt(0) == 'A') {
					System.out.println(a[row][col]);
				}else if(str.charAt(4) == 'C') {
					int[] temp = new int[110];
					for (int j = 1; j <= n; j++) {
						temp[j] = a[j][row];
					}
					for (int j = 1; j <= n; j++) {
						a[j][row] = a[j][col];
					}
					for (int j = 1; j <= n; j++) {
						a[j][col] = temp[j];
					}
				}else if(str.charAt(4) == 'R' ) {
					int[] temp = new int[110];
					for (int j = 1; j <= n; j++) {
						temp[j] = a[row][j];
					}
					for (int j = 1; j <= n; j++) {
						a[row][j] = a[col][j];
					}
					for (int j = 1; j <= n; j++) {
						a[col][j] = temp[j];
					}
				}
			}
				
			
		}
	}

}
