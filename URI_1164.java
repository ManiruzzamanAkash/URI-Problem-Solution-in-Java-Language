package URI_Problems_solution;

import java.util.Scanner;

/**
					3
					6
					5
					28	
					6 eh perfeito
					5 nao eh perfeito
					28 eh perfeito

 */
public class URI_1164 {


	public static void main(String[] args) {
		int N = 0,X = 0 ;
		Scanner input =new Scanner(System.in);
		N =input.nextInt();
		for (int i = 0; i < N; i++) {
			int sum = 0;
			X =input.nextInt();
			for (int j = 1; j <= X/2; j++) {
				if ((X % j) == 0) {
					sum += j;
				}
				
			}
			if (sum == X) {
				System.out.print(X+" eh perfeito\n");
			}else {
				System.out.print(X+" nao eh perfeito\n");
			}
		}
		

	}

}
