package URI_Problems_solution;
/**
			3
			0
			4
			2	
			Fib(0) = 0
			Fib(4) = 3
			Fib(2) = 1

 */
import java.util.Scanner;

public class URI_1176 {

	public static void main(String[] args) {
		int T, N, i, j;
		int fibo[]=new int[61];
		fibo[0] = 0;
		fibo[1] = 1;
		
		Scanner input =new Scanner(System.in);
		T =input.nextInt();
		for (j = 0; j < T; j++) {
			N = input.nextInt();
			
			for ( i = 2; i < 61; i++) {
				fibo[i] = fibo[i - 1]+fibo[i - 2];
				if (N == 0) {
					System.out.print("Fib("+0+") = "+0+"\n");
					break;
				}else if (N == 1) {
					System.out.print("Fib("+1+") = "+1+"\n");
					break;
				}
				//for ( i = 0; i < 60; i++) {
					if (i == N) {
						System.out.print("Fib("+i+") = "+fibo[i]+"\n");
					}
				//}
				
				
			}
			
		}

	}

}
