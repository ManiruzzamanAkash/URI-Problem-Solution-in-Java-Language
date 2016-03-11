package URI_Problems_solution;

import java.util.Scanner;

/**
			0 0
			5 12
			-----
			0
			120

 */
public class URI_1197 {

	public static void main(String[] args) {
		int v, t , s, double_S;
		Scanner sc =new Scanner(System.in);
		int EOF = -1;
		while (((v =sc.nextInt() )!= EOF)) {
			t = sc.nextInt();
			s = v * t;
			double_S = s * 2;
			System.out.print(double_S+"\n");
		}

	}

}
