package URI_Problems_solution;

import java.util.Scanner;

/**
  				140
			1 x 140 = 140
			2 x 140 = 280
*/
public class URI_1078 {

	public static void main(String[] args) {
		int N;
		Scanner input=new Scanner(System.in);
		N =input.nextInt();
		for (int i = 1; i <= 10; i++) {
			System.out.print(i+" x "+N+" = "+(i*N)+"\n");
		}

	}

}
