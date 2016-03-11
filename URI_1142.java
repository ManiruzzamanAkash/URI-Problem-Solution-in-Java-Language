package URI_Problems_solution;
/**
					7	
				1 2 3 PUM
				5 6 7 PUM
				9 10 11 PUM
				13 14 15 PUM
				17 18 19 PUM
				21 22 23 PUM
				25 26 27 PUM

 */
import java.util.Scanner;

public class URI_1142 {

	public static void main(String[] args) {
		int N;
		Scanner input = new Scanner(System.in);
		N = input.nextInt();
		for (int i = 1; i <= (4*N - 1); i+=4) {
			for (int j = i; j <= i+2; j++) {
				System.out.print(j+" ");
			}
			System.out.println(" PUM\n");
		}
	}
}
