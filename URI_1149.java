package URI_Problems_solution;

import java.util.Scanner;


/**
						3 2	
						7
 */
public class URI_1149 {

	public static void main(String[] args) {
		int A, N,total = 0;
		Scanner input =new Scanner(System.in);
		A = input.nextInt();
		N =input.nextInt();
		for (int i = A,totalNumber = 0; totalNumber < N; i++) {
			total += i;
			totalNumber += 1;
		}
		System.out.print(total+"\n");
	}

}
