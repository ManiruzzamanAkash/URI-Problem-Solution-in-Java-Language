package URI_Problems_solution;

import java.util.Scanner;

import javax.security.auth.x500.X500Principal;

/**
						 2 2		primeiro
						3 -2		quarto
						-8 -1		terceiro
						-7 1		segundo
						0 2	
						
 */
public class URI_1115 {

	public static void main(String[] args) {
		int firstsign,secondSign;
		Scanner input =new Scanner(System.in);
		while (((firstsign =input.nextInt()) != 0) &&((secondSign =input.nextInt()) != 0) ) {
			if (firstsign > 0 && secondSign > 0) {
				System.out.print("primeiro\n");
			}else if (firstsign > 0 && secondSign < 0) {
				System.out.print("quarto\n");
			}else if(firstsign < 0 && secondSign < 0){
				System.out.print("terceiro\n");
			}else if (firstsign < 0 && secondSign > 0) {
				System.out.print("segundo\n");
			}
		}

	}

}
