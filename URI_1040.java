package URI_Problems_solution;
/**
				2.0 4.0 7.5 8.0
				6.4	
				Media: 5.4
				Aluno em exame.
				Nota do exame: 6.4
				Aluno aprovado.
				Media final: 5.9
				
				2.0 6.5 4.0 9.0			
				Media: 4.8
				Aluno reprovado.
				
				9.0 4.0 8.5 9.0	
				Media: 7.3
				Aluno aprovado.
  If the average was 7.0 or more, print the message "Aluno aprovado." (Approved Student)
 average was between 5.0 and 6.9 "Aluno em exame." (In exam student).
 If the average was less than 5.0, "Aluno reprovado." (Reproved Student). 
 */
import java.util.Scanner;

public class URI_1040 {

	public static void main(String[] args) {
		
		float N1, N2, N3, N4,average,N5,recalaverage;
		Scanner input =new Scanner(System.in);
		N1 =input.nextFloat();
		N2 =input.nextFloat();
		N3 =input.nextFloat();
		N4 =input.nextFloat();
		
		average =((N1 * 2)+(N2 * 3)+( N3 * 4)+(N4 * 1))/10;
		
		if (average >= 7.0) {
			
			 System.out.printf("Media: %.1f\n",average);
			 System.out.print("Aluno aprovado.\n");
			 
		}
		
		else if (average >= 5.0 && average <= 6.9) {
			
			System.out.printf("Media: %.1f\n",average);
			System.out.print("Aluno em exame.\n");
			N5 =input.nextFloat();
			System.out.printf("Nota do exame: %.1f\n",N5);
			recalaverage =(average + N5) / 2;
			
			if (recalaverage >= 5.0) {
				System.out.print("Aluno aprovado.\n");
				
			}else {
				System.out.print("Aluno reprovado.\n");
				
			}
			
			System.out.printf("Media final: %.1f\n",recalaverage);
			
		}
		
		else if (average < 5.0) {
			
			System.out.printf("Media: %.1f\n",average);
			System.out.print("Aluno reprovado.\n");
			
		}
	}

}
