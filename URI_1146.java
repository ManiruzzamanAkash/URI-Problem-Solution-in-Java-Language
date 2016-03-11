package URI_Problems_solution;
/**
				5			1 2 3 4 5	
				10			1 2 3 4 5 6 7 8 9 10	
				3			1 2 3		
				0	
 */
import java.util.Scanner;

public class URI_1146 {

	public static void main(String[] args) {

		int X;
		Scanner input =new Scanner(System.in);
		while ((X = input.nextInt()) != 0) {
			for (int i = 1; i <= X; i++) {
				if (i == X) {
					System.out.print(i+"\n");
				}else {
					System.out.print(i+" ");
				}
				
			}
		}
	}

}
