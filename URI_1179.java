package URI_Problems_solution;
/**
				1
				3
				4
				-4
				2
				3
				8
				2
				5
				-7
				54
				76
				789
				23
				98	
				par[0] = 4
				par[1] = -4
				par[2] = 2
				par[3] = 8
				par[4] = 2
				impar[0] = 1
				impar[1] = 3
				impar[2] = 3
				impar[3] = 5
				impar[4] = -7
				impar[0] = 789
				impar[1] = 23
				par[0] = 54
				par[1] = 76
				par[2] = 98

 */
import java.util.Scanner;

public class URI_1179 {

	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);
		int par[] =new int[5];
		int impar[] =new int[5];
		
		int x, i, j, total;
		for ( i = 0; i < 15; i++) {
			x = input.nextInt();
			if( x % 2 == 0){
				par[i] = x;
			}else {
				impar[i] = x;
			}
		}
		for ( i = 0; i < 15; i++) {
			System.out.print("par[i] = "+par[i]+"\n");
			System.out.print("impar[i] = "+impar[i]+"\n");
		}

	}

}
