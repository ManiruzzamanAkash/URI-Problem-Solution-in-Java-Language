package URI_Problems_solution;

/**				-3.5			nota invalida
				3.5				nota invalida
				11.0			media = 6.75
				10.0		
*/
import java.util.Scanner;

public class URI_1117 {

	public static void main(String[] args) {
		
		float firstScore,media = 0,total = 0,total2 = 0;
		Scanner input =new Scanner(System.in);

		while (total2 != 2) {
			firstScore =input.nextFloat();
			if (firstScore >=0.0 && firstScore <= 10.0) {
				total += firstScore;
				total2 += 1;
			}else {
				System.out.print("nota invalida\n");
			}
		}
		
		media =(float) total / 2;
		
		System.out.printf("media = %.2f\n",media);
		
		}

	}
