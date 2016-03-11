package URI_Problems_solution;
/**
					10
					10 C			Total: 92 cobaias
					6 R
					15 S		
					5 C				Total de coelhos: 29
					14 R			Total de ratos: 40
					9 C				Total de sapos: 23
					6 R				Percentual de coelhos: 31.52 %
					8 S				Percentual de ratos: 43.48 %
					5 C				Percentual de sapos: 25.00 %
					14 R			

 */
import java.util.Scanner;

public class URI_1094 {

	public static void main(String[] args) {
		int N, X, total = 0, total_C = 0, total_R = 0, total_S = 0;
		float total_C_parcent = 0,total_R_parcent = 0, total_S_parcent = 0;
		String animal_cha;
		Scanner input =new Scanner(System.in);
		N = input.nextInt();
		for (int i = 1; i <= N; i++) {
			X = input.nextInt();
			animal_cha =input.next();
			total += X;
			if (animal_cha.equals("C")) {
				total_C += X;
			}else if(animal_cha.equals("R")){
				total_R += X;
			}else if(animal_cha.equals("S")){
				total_S += X;
			}
			total_C_parcent = (float)((total_C * 100.00) /total);
			total_R_parcent = (float)((total_R * 100.00) /total);
			total_S_parcent = (float)((total_S * 100.00) /total);
			
		}
		
		System.out.print("Total: "+total+" cobaias\n");
		System.out.print("Total de coelhos: "+total_C+"\n");
		System.out.print("Total de ratos: "+total_R+"\n");
		System.out.print("Total de sapos: "+total_S+"\n");
		
		System.out.printf("Percentual de coelhos: %.2f",total_C_parcent);
		System.out.print(" %\n");
		System.out.printf("Percentual de ratos: %.2f",total_R_parcent);
		System.out.print(" %\n");
		System.out.printf("Percentual de sapos: %.2f",total_S_parcent);
		System.out.print(" %\n");

	}
}
