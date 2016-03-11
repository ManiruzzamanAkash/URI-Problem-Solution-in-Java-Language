package URI_Problems_solution;

import java.util.Scanner;

/**
						10
					1 2 3 4 -5 6 7 8 9 10	
					Menor valor: -5
					Posicao: 4

 */
public class URI_1180 {

	public static void main(String[] args) {
		Scanner input =new Scanner(System.in);
		int N, x, min = 0, position = 0;
		N = input.nextInt();
		int X[] =new int[N+1];
		for (int i = 0; i < N; i++) {
			x = input.nextInt();
			X[i] = x;
			
			if (X[i+1] < X[i]) {
				min = X[i + 1];
				position = i + 1;
			}else {
				min = X[i];
				position = i;
			}
		}
		System.out.println("Menor valor: "+min+"\n");
		System.out.println("Posicao: "+position+"\n");
		
	}

}
