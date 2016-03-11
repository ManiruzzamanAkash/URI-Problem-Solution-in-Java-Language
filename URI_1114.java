package URI_Problems_solution;

import java.util.Scanner;

/**
 * 2200 Senha Invalida 1020 Senha Invalida 2022 Senha Invalida 2002 Acesso
 * Permitido
 */
public class URI_1114 {

	public static void main(String[] args) {
		int password = 2002, givenPassword;
		Scanner input = new Scanner(System.in);

		while ((givenPassword = input.nextInt()) != password) {
			System.out.print("Senha Invalida\n");

		}

		System.out.print("Acesso Permitido\n");

	}
}
