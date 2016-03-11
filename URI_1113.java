package URI_Problems_solution;
/**
					5 4		Decrescente	
					7 2		Decrescente	
					3 8		Crescente	
					2 2			
					
					

 */
import java.util.Scanner;

public class URI_1113 {

	public static void main(String[] args) {
		int X ,Y ;
		
		Scanner input =new Scanner(System.in);

		do {
			
			X = input.nextInt();
			Y = input.nextInt();
			if (X > Y) {
				System.out.print("Decrescente\n");
			}else if (X < Y) {
				System.out.print("Crescente\n");
			}
		} while (X != Y);

	}

}
