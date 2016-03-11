package URI_Problems_solution;
/**
						400.00	
						Novo salario: 460.00
						Reajuste ganho: 60.00
						Em percentual: 15 %
						
						800.01	
						Novo salario: 880.01
						Reajuste ganho: 80.00
						Em percentual: 10 %
						
						2000.00	
						Novo salario: 2140.00
						Reajuste ganho: 140.00
						Em percentual: 7 %

 */
import java.util.Scanner;

public class URI_1048 {

	public static void main(String[] args) {
		float N,new_salary = 0,earn_Money = 0;
		int parcent = 0;
		Scanner input =new Scanner(System.in);
		N =input.nextFloat();
		
		if (N >= 0 && N <= 400.00) {
			parcent = 15;
			new_salary = (float) (N + (N * (parcent /100.00)));
			earn_Money = (float) ((N * (parcent /100.00)));
			
		}else if (N >= 400.01 && N <= 800.00) {
			parcent = 12;
			new_salary = (float) (N + (N * (parcent /100.00)));
			earn_Money = (float) ((N * (parcent /100.00)));
		}else if (N >= 800.01 && N <= 1200.00) {
			parcent = 10;
			new_salary = (float) (N + (N * (parcent /100.00)));
			earn_Money = (float) ((N * (parcent /100.00)));
			
		}else if (N >= 1200.01 && N <= 2000.00) {
			parcent = 7;
			new_salary = (float) (N + (N * (parcent /100.00)));
			earn_Money = (float) ((N * (parcent /100.00)));
		}else if (N >= 2000.01) {
			parcent = 4;
			new_salary = (float) (N + (N * (parcent /100.00)));
			earn_Money = (float) ((N * (parcent /100.00)));
		}
		
		System.out.printf("Novo salario: %.2f\n",new_salary);
		System.out.printf("Reajuste ganho: %.2f\n",earn_Money);
		System.out.print("Em percentual: "+parcent+" %\n");

	}

}
