package URI_Problems_solution;
/**
						3	
					N[0] = 0
					N[1] = 1
					N[2] = 2
					N[3] = 0
					N[4] = 1
					N[5] = 2
					N[6] = 0
					N[7] = 1
					N[8] = 2
...

 */
import java.util.Scanner;

public class URI_1177 {
	
	public static void main(String[] args) {
		int T, i,j;
		int N[] =new int[1000];
		Scanner input =new Scanner(System.in);
		T =input.nextInt();
		
		
		for ( i = 0,j = 0; i < 1000; j++,i++) {
			N[j] = j;
			if ((N[j]) == T) {
				j = 0;
			}
			System.out.print("N["+i+"] = "+N[j]+"\n");
		}
	}
}
