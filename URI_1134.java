package URI_Problems_solution;

import java.util.Scanner;

/**
 * 8 1 7 2 2 4 MUITO OBRIGADO Alcool: 1 Gasolina: 2 Diesel: 0
 */
public class URI_1134 {

	public static void main(String[] args) {
		int X = 0, fuel = 0, customerAlcohol = 0, customerGasolin = 0, customerDisel = 0;
		Scanner input = new Scanner(System.in);
		
		
		
		while (X != 4) {
			X = input.nextInt();
			if (X == 1) {
				customerAlcohol+=1;
			}else if (X == 2) {
				customerGasolin += 1;
			}else if (X == 3) {
				customerDisel += 1;
			}
			
		}
		//Alcool: 1 Gasolina: 2 Diesel: 0
		System.out.print("MUITO OBRIGADO\n");
		System.out.print("Alcool: "+customerAlcohol+"\n");
		System.out.print("Gasolina: "+customerGasolin+"\n");
		System.out.print("Diesel: "+customerDisel+"\n");
		

	}

}
