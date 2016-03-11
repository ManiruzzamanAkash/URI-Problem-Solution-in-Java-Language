package URI_Problems_solution;
/**
		if A ≥ B + C, write the message: NAO FORMA TRIANGULO
		if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
		if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
		if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
		if the three sides are the same size, write the message: TRIANGULO EQUILATERO
		if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
	
		7.0 5.0 7.0		TRIANGULO ACUTANGULO
						TRIANGULO ISOSCELES
						
		6.0 6.0 10.0	TRIANGULO OBTUSANGULO
						TRIANGULO ISOSCELES
						
		6.0 6.0 6.0		TRIANGULO ACUTANGULO
						TRIANGULO EQUILATERO
						
		5.0 7.0 2.0		NAO FORMA TRIANGULO
		
		6.0 8.0 10.0	TRIANGULO RETANGULO

 
 */
import java.util.Scanner;

public class URI_1045 {

	public static void main(String[] args) {
		double A, B, C;
		Scanner input =new Scanner(System.in);
		A = input.nextDouble();
		B = input.nextDouble();
		C = input.nextDouble();
		double tempA = Math.max(A, Math.max(B, C));
		double tempB = 0;
		double tempC = 0;
		
		if (tempA == A) {
			tempB =Math.max(B, C);
			tempC =Math.min(B, C);
		}
		if (tempA == B) {
			tempB =Math.max(A, C);
			tempC =Math.min(A, C);
		}
		if (tempA == C) {
			tempB =Math.max(B, A);
			tempC =Math.min(B, A);
		}
		//------------------------------
		if (tempA >= (tempB + tempC)) {
			System.out.print("NAO FORMA TRIANGULO\n");
			
		}else if (tempA*tempA > ((tempB*tempB)+(tempC*tempC))) {
			System.out.print("TRIANGULO OBTUSANGULO\n");
		}
		if (tempA*tempA == ((tempB*tempB)+(tempC*tempC))) {
			System.out.print("TRIANGULO RETANGULO\n");
		}

		if (tempA*tempA < ((tempB*tempB)+(tempC*tempC))) {
			System.out.print("TRIANGULO ACUTANGULO\n");
		}
		if ((tempA == tempB) &&(tempA == tempC)) {
			System.out.print("TRIANGULO EQUILATERO\n");
		}
		if (((tempA == tempB) &&(tempA != tempC)) || ((tempA == tempC) &&(tempA != tempB)) || ((tempB == tempC) &&(tempB != tempA)) ) {
			System.out.print("TRIANGULO ISOSCELES\n");
		}
	}

}
