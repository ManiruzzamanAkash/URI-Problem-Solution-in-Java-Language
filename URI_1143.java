package URI_Problems_solution;
/**
						      5	
							1 1 1
							2 4 8
							3 9 27
							4 16 64
							5 25 125

 */
import java.util.Scanner;

public class URI_1143 {

	public static void main(String[] args) {
		int N;
		Scanner input =new Scanner(System.in);
		N = input.nextInt();
		for (int i = 1; i <= N; i++) {
			for (int j = i, k = (j* i), l = (k * j);j == i ;j++) {
				System.out.print(j+" "+k+" "+l+"\n");
			}
		}

	}

}
