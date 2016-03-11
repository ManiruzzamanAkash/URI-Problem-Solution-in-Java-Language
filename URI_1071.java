package URI_Problems_solution;
/*
					6 -5		5
					15 12		13

 */
import java.util.Scanner;

public class URI_1071 {

	public static void main(String[] args) {
		int X, Y, total = 0;
		Scanner input =new Scanner(System.in);
		X = input.nextInt();
		Y = input.nextInt();
		
		if (X > Y) {
			for (int i = X - 1; i > Y; i--) {
				if (i % 2 != 0) {
					total += i;
				}
			}
		}else {
			for (int i = Y - 1; i > X; i--) {
				if (i % 2 != 0) {
					total += i;
				}
			}
		}
		
		System.out.print(total+"\n");

	}

}
