package URI_Problems_solution;
/**
						34
						56
						44		39.25
						23
						-2	
 */
import java.util.Scanner;

public class URI_1154 {
	
	public static void main(String[] args) {
		int age;
		int totalNum = 0,totalAge = 0;
		float ageAverage;
		Scanner input =new Scanner(System.in);
		int i =1;
		while (((age = input.nextInt()) >= 0)) {
			totalAge += age;
			totalNum += i;
		}
		ageAverage = (float)((float)totalAge / (totalNum));
		System.out.printf("%.2f\n",ageAverage);
	}

}
