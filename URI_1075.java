package URI_Problems_solution;

import java.util.Scanner;

public class URI_1075 {

	public static void main(String[] args) {

		int N;
		Scanner input =new Scanner(System.in);
		
		N =input.nextInt();
		for (int i = 0; ((N*i) + 2) < 10000; i++) {
			System.out.print((N*i) + 2+"\n");
		}

	}

}
