package URI_Problems_solution;

import java.util.Scanner;

/**
				 	6 24	Sao Multiplos
					6 25	Nao sao Multiplos

 */
public class URI_1044 {

	public static void main(String[] args) {
		int A, B;
		Scanner input =new Scanner(System.in);
		A = input.nextInt();
		B = input.nextInt();
		if (B % A == 0 || A % B == 0) {
			System.out.print("Sao Multiplos\n");
		}else {
			System.out.print("Nao sao Multiplos\n");
		}

	}

}
