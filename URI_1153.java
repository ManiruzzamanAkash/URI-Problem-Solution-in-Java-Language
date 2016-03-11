package URI_Problems_solution;

import java.util.Scanner;

public class URI_1153 {

	public static void main(String[] args) {
		int N, fact = 1;
		Scanner input =new Scanner(System.in);
		N = input.nextInt();
		for (int i = 1; i <= N; i++) {
			fact *= i;
		}
		System.out.print(fact+"\n");

	}

}
