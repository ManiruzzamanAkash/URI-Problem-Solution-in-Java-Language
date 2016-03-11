package URI_Problems_solution;
/**
							 3
							115380
							2819311
							23456	
							--------
							27 leds
							29 leds
							25 leds

 */
import java.util.Scanner;

public class URI_LED {

	public static void main(String[] args) {
		int takeValue, testCase;
		int ledValue[] = {6,2,5,5,4,5,6,3,7,6};
		
		Scanner sc =new Scanner(System.in);
		
		testCase = sc.nextInt();
		for (int i = 1; i <= testCase; i++) {
			int everyValue = 0,totalLed = 0;
			takeValue = sc.nextInt();
			
			while (takeValue != 0) {
				everyValue =(takeValue % 10);
				takeValue /= 10;
				totalLed += ledValue[everyValue];
			}
			
			System.out.println(totalLed+" leds");
		}
		
		

	}

}
