package URI_Problems_solution;
/**
					6	
							1
							2
							3
							6
 */
import java.util.Scanner;

public class URI_1157 {

	public static void main(String[] args) {
		int N;
		Scanner input =new Scanner(System.in);
		N = input.nextInt();
		for (int i = 1; i <= N; i++) {
			if (N % i == 0) {
				System.out.print(i+"\n");
			}
		}

	}

}
