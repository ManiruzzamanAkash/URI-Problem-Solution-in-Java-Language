package URI_Problems_solution;
/**
				3002.00
				R$ 80.36
				--------
				1701.12
				Isento
				--------
				4520.00
				R$ 355.60
 */
import java.util.Scanner;

public class URI_1051 {

	public static void main(String[] args) {
		float n, r, f1, f2, f3;
		Scanner sc =new Scanner(System.in);
		n =	sc.nextFloat();
		
	if(n <= 2000){
			System.out.print("Isento\n");
		}else{
			if(n > 2000 && n <= 3000){
				f1 = n - 2000;
				f1 = ((f1 * 8) / 100);
				r = f1;
			}else if(n > 3000 && n <= 4500){
				f1 = n - 2000;
				f2 = f1 - 1000;
				f1 -= f2;
				f1 = ((f1 * 8) / 100);
				f2 = ((f2 * 18) / 100);
				r = f2 + f1;
			}else{
				f1 = n - 2000;
				f2 = f1 - 1000;
				f3 = f2 - 1500;
				f1 -= f2;
				f2 -= f3;
				f1 = ((f1 * 8) / 100);
				f2 = ((f2 * 18) / 100);
				f3 = ((f3 * 28) / 100);
				r = f3 + f2 + f1;
			}
			System.out.printf("R$ %.2f\n",r);
		}

	}

}
