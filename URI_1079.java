package URI_Problems_solution;
/**
			3
			6.5 4.3 6.2		5.7
			5.1 4.2 8.1		6.3
			8.0 9.0 10.0	9.3

 */
import java.util.Scanner;

public class URI_1079 {

	public static void main(String[] args) {
		
		int N;
		float value1, value2, value3;
		float average;
		Scanner input =new Scanner(System.in);
		N = input.nextInt();
		
		for (int i = 1; i <= N; i++) {
			value1 = input.nextFloat();
			value2 = input.nextFloat();
			value3 = input.nextFloat();
			average = ( value1*2 + value2*3 + value3*5 ) / 10;
			System.out.printf("%.1f\n", average);
		}
	}

}
