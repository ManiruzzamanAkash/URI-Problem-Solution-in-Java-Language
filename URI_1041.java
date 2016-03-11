package URI_Problems_solution;
/**
						4.5 -2.2		Q4
						0.1 0.1			Q1
						0.0 0.0			Origem

 */
import java.util.Scanner;

public class URI_1041 {

	public static void main(String[] args) {
		float X, Y;
		Scanner input =new Scanner(System.in);
		X = input.nextFloat();
		Y = input.nextFloat();
		if (X == 0.0 && Y == 0.0) {
			System.out.print("Origem\n");
		}else if (X == 0.0 && Y != 0.0) {
			System.out.print("Eixo Y\n");
		}else if (Y == 0.0 && X != 0.0) {
			System.out.print("Eixo X\n");
		}else if (X > 0.0 && Y > 0.0) {
			System.out.print("Q1\n");
		}else if (X < 0.0 && Y < 0.0) {
			System.out.print("Q3\n");
		}else if (X < 0.0 && Y > 0.0) {
			System.out.print("Q2\n");
		}else  {
			System.out.print("Q4\n");
		}
		
	}

}
