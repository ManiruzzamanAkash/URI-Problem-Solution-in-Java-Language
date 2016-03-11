package URI_Problems_solution;
/**
				25.01	Intervalo (25,50]
				25.00	Intervalo [0,25]
				100.00	Intervalo (75,100]
				-25.02	Fora de intervalo
				
			[0,25] (25,50], (50,75], (75,100]
 */
import java.util.Scanner;

public class URI_1037 {

	public static void main(String[] args) {
		float N;
		Scanner input =new Scanner(System.in);
		N = input.nextFloat();
		//Set the range
		if (N >=0 && N <= 25.0000) {
			System.out.printf("Intervalo [0,25]\n");
		}else if (N >= 25.00001 && N <= 50.0000000) {
			System.out.printf("Intervalo (25,50]\n");
		}else if (N >= 50.00001 && N <= 75.0000000) {
			System.out.printf("Intervalo (50,75]\n");
		}else if (N >= 75.00001 && N<=100.0000000) {
			System.out.printf("Intervalo (75,100]\n");
		}else {
			System.out.print("Fora de intervalo\n");
		}

	}

}
