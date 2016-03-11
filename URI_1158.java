package URI_Problems_solution;
/**
					2
					4 3				21
					11 2			24
								
								

 */
import java.util.Scanner;

public class URI_1158 {

	public static void main(String[] args) {

		int N, X, Y, j, total;
		Scanner input = new Scanner(System.in);
		N = input.nextInt();
		
		for (int i = 1; i <= N; i++) {
			int sum = 0;
			X = input.nextInt();
			Y = input.nextInt();
			for (j = X,total = 0; total < Y; j++) {
				if (j % 2 != 0) {
					sum += j;
					total += 1;
				}
			}
			System.out.print(sum+"\n");
		}

	}

}
