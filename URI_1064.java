package URI_Problems_solution;
/**
				7
				-5
				6
				-3.4
				4.6
				12	
						4 valores positivos
						7.4

 */
import java.util.Scanner;

public class URI_1064 {

	public static void main(String[] args) {
		
		float n1,total = 0,average = 0;
		int totalNumber = 0;
		Scanner sc =new Scanner(System.in);
		for (int i = 1; i <= 6; i++) {
			n1 =sc.nextFloat();
			if (n1 > 0) {
				totalNumber += 1;
				total += n1;
			}
		}
		average = total / totalNumber;
		
		System.out.print(totalNumber+" valores positivos\n");
		System.out.printf("%.1f\n",average);
	}

}
