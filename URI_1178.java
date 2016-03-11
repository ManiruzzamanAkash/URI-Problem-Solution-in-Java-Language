package URI_Problems_solution;

import java.util.Scanner;

/**
						200.0000
					N[0] = 200.0000
					N[1] = 100.0000
					N[2] = 50.0000
					N[3] = 25.0000
					N[4] = 12.5000
					...

 */
public class URI_1178 {

	public static void main(String[] args) {
		float T;
		int i,j;
		float N[] =new float[100];
		Scanner input =new Scanner(System.in);
		T =input.nextFloat();
		
		for ( i = 0,j = 0; i < 100; j++,T /= 2,i++) {
			N[j] = T;
			
			System.out.print("N["+i+"] = ");
			System.out.printf("%.4f\n",N[j]);
			
		}

	}

}
