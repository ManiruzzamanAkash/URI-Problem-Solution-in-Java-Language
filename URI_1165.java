package URI_Problems_solution;
/*
								3
						8				8 nao eh primo
						51				51 nao eh primo
						7				7 eh primo
 */
import java.util.Scanner;

public class URI_1165 {

	public static void main(String[] args) {
		int N, X, j;
		Scanner input = new Scanner(System.in);
		N = input.nextInt();
		for (int i = 1; i <= N; i++) {
			X = input.nextInt();
			boolean isprime =true;
			for ( j = 2; j < X; j++) {
					if (X % j == 0) {
						isprime = false;
					}
			}

			if (isprime) {
				System.out.print(X +" eh primo\n");
			}else {
				System.out.print(X +" nao eh primo\n");
			}
			
		}

	}

}
