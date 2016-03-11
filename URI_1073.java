package URI_Problems_solution;
/**
				6	
				
				2^2 = 4
				4^2 = 16
				6^2 = 36
 

 */
import java.util.Scanner;

public class URI_1073 {

	public static void main(String[] args) {
		
		int N;
		Scanner input =new Scanner(System.in);
		N =input.nextInt();
		
		
		for (int i = 2; i <= N; i+= 2) {
			System.out.print(i+"^2 = "+(i*i)+"\n");
		}

	}

}
