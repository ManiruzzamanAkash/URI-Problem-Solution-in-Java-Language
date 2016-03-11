package URI_Problems_solution;
/**
				3 2	Total: R$ 10.00
				4 3	Total: R$ 6.00
				2 3	Total: R$ 13.50

 */  
//Accepted
import java.util.Scanner;

public class URI_1038 {

	public static void main(String[] args) {
		int X, Y;
		float price = 0;
		
		Scanner input = new Scanner(System.in);
		X = input.nextInt();
		Y = input.nextInt();
		if (X == 1) {
			price  = (float) (4.00 * Y);
		}else if (X == 2) {
			price  = (float) (4.50 * Y);
		}else if (X == 3) {
			price  = (float) (5.00 * Y);
		}else if (X == 4) {
			price  = (float) (2.00 * Y);
		}else if (X == 5) {
			price  = (float) (1.50 * Y);
		}
		
		System.out.printf("Total: R$ %.2f\n",price);
	}

}
