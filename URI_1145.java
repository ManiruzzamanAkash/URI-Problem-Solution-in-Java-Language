package URI_Problems_solution;

import java.util.Scanner;

/**
					3 99
						
					1 2 3
					4 5 6
					7 8 9
					10 11 12
					...
					97 98 99
 */
public class URI_1145 {

	public static void main(String[] args) {
		int X,Y;
		Scanner input =new Scanner(System.in);
		X = input.nextInt();
		Y = input.nextInt();
		for (int i = 1; i <= (Y); i+=3) {
			for (int j = i; j <= i+(X - 1); j++) {
				System.out.print(j+" ");
			}
			System.out.print("\n");
		}

	}

}
