package URI_Problems_solution;
/**
						10.0 20.1 5.1	
						R1 = -0.29788
						R2 = -1.71212
						0.0 20.0 5.0	
						Impossivel calcular
						10.3 203.0 5.0	
						R1 = -0.02466
						R2 = -19.68408
						10.0 3.0 5.0	
						Impossivel calcular

 */
import java.util.Scanner;

//Problem

public class URI_1036 {

	public static void main(String[] args) {
		float A, B, C, R1, R2;
		Scanner input =new Scanner(System.in);
		A = input.nextFloat();
		B = input.nextFloat();
		C = input.nextFloat();
		
		if ((A == 0) || (((B*B) -(4*A*C)) < 0)) {
			System.out.print("Impossivel calcular\n");
		}else {
			R1 =(float) ((-B + Math.sqrt(((B*B) -(4*A*C)))) / (2*A));
			R2 =(float) ((-B - Math.sqrt(((B*B) -(4*A*C)))) / (2*A));
			
			System.out.printf("R1 = %.5f\n", R1);
			System.out.printf("R2 = %.5f\n", R2);
		}
		
		
	}

}
